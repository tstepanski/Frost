Error Handling
==============

Sometimes a method can't guarantee that it will be successful. The [File.openInputStream()] method,
for example, might fail because the file does not exist, or because of permission problems, or for
any of a number of other reasons.

There are three main ways for a method to communicate failures back to its caller:

1. A nullable result. This is the right choice when there is no need to convey any additional
   information back to the caller beyond "it failed". For instance, when the [Int64.parse]
   function cannot parse a string, it simply returns `null` to indicate that "this wasn't a valid
   number". There really isn't any need for further information, so the function doesn't bother with
   the [Error] class at all.
2. A [Maybe] result. The `Maybe<T>` type contains either an instance of the type `T`, or an `Error`.
   The caller can inspect this object to retrieve the result or examine the `Error`.
3. The return type `Error?`. When a method does not normally need to return any information, but
   still might fail, `Error?` is the right return type. `File.delete()` is a good example of this
   sort of method. It is a compile-time error for a program to call a method which returns `Error?`
   and ignore the return value.

Because it is common to call many `Error?`-returning methods in sequence (for instance, interacting
with the filesystem will tend to involve many such calls), manually checking the result of each call
quickly becomes tedious. The `try ... fail` syntax exists to help with this:

    try {
        def out := path.openOutputStream()
        out.write("No error handling necessary here!")
    }
    fail(e) {
        Console.printLine("Error writing file: \{e}")
    }

Within a `try` block, if any method call results in an error (either a `Maybe` result which contains
an `Error` or a non-`null` `Error?` return value), the program immediately jumps to the `fail`
block. Since all `Maybe`s within the `try` block are known to have succeeded (otherwise, we would
have jumped to the `fail` block), they are automatically unwrapped. The variable `out` in the above
snippet of code has type `OutputStream`, despite the fact that `path.openOutputStream()` returns
`Maybe<OutputStream>` - placing the call inside of a `try` block handles the error checking and
unwrapping automatically.

Note that Frost's `try` block is very different from `try` blocks in languages such as C++ and Java.
Frost does not feature exception handling and Frost's `try` therefore has nothing to do with
exceptions. Frost `Error`s do not cause the stack to unwind, will not propagate to enclosing
contexts, etc. Frost's `try` block simply forwards any `Errors` happening within it to the `fail`
block and automatically unwraps any `Maybes`.
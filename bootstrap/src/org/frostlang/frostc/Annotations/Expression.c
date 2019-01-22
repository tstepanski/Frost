#include "org/frostlang/frostc/Annotations/Expression.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"


static frost$core$String $s1;
org$frostlang$frostc$Annotations$Expression$class_type org$frostlang$frostc$Annotations$Expression$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { org$frostlang$frostc$Annotations$Expression$get_asString$R$frost$core$String, org$frostlang$frostc$Annotations$Expression$cleanup} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2e\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e", 43, -2482221078046048652, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x70\x72\x65\x28", 5, 17286533032, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x70\x72\x65\x4f\x72\x28", 7, 176339923868825, NULL };
static frost$core$String $s30 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s42 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x70\x6f\x73\x74\x28", 6, 1745936895859, NULL };
static frost$core$String $s44 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s56 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x70\x6f\x73\x74\x41\x6e\x64\x28", 9, 1798840529767313334, NULL };
static frost$core$String $s58 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s70 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x70\x72\x69\x6f\x72\x69\x74\x79\x28", 10, -2784236252649266257, NULL };
static frost$core$String $s72 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };

frost$core$String* org$frostlang$frostc$Annotations$Expression$get_asString$R$frost$core$String(org$frostlang$frostc$Annotations$Expression* param0) {

org$frostlang$frostc$ASTNode* local0 = NULL;
org$frostlang$frostc$ASTNode* local1 = NULL;
org$frostlang$frostc$ASTNode* local2 = NULL;
org$frostlang$frostc$ASTNode* local3 = NULL;
org$frostlang$frostc$ASTNode* local4 = NULL;
// line 35
frost$core$Int64* $tmp2 = &param0->$rawValue;
frost$core$Int64 $tmp3 = *$tmp2;
frost$core$Int64 $tmp4 = (frost$core$Int64) {0};
frost$core$Bit $tmp5 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp4);
bool $tmp6 = $tmp5.value;
if ($tmp6) goto block2; else goto block3;
block2:;
frost$core$String** $tmp7 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp8 = *$tmp7;
org$frostlang$frostc$ASTNode** $tmp9 = (org$frostlang$frostc$ASTNode**) (param0->$data + 8);
org$frostlang$frostc$ASTNode* $tmp10 = *$tmp9;
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
org$frostlang$frostc$ASTNode* $tmp11 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp11));
*(&local0) = $tmp10;
// line 36
org$frostlang$frostc$ASTNode* $tmp12 = *(&local0);
frost$core$String* $tmp13 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s14, ((frost$core$Object*) $tmp12));
frost$core$String* $tmp15 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp13, &$s16);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
org$frostlang$frostc$ASTNode* $tmp17 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp17));
*(&local0) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp15;
block3:;
frost$core$Int64 $tmp18 = (frost$core$Int64) {1};
frost$core$Bit $tmp19 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp18);
bool $tmp20 = $tmp19.value;
if ($tmp20) goto block4; else goto block5;
block4:;
frost$core$String** $tmp21 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp22 = *$tmp21;
org$frostlang$frostc$ASTNode** $tmp23 = (org$frostlang$frostc$ASTNode**) (param0->$data + 8);
org$frostlang$frostc$ASTNode* $tmp24 = *$tmp23;
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
org$frostlang$frostc$ASTNode* $tmp25 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
*(&local1) = $tmp24;
// line 37
org$frostlang$frostc$ASTNode* $tmp26 = *(&local1);
frost$core$String* $tmp27 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s28, ((frost$core$Object*) $tmp26));
frost$core$String* $tmp29 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp27, &$s30);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
org$frostlang$frostc$ASTNode* $tmp31 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp31));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp29;
block5:;
frost$core$Int64 $tmp32 = (frost$core$Int64) {2};
frost$core$Bit $tmp33 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp32);
bool $tmp34 = $tmp33.value;
if ($tmp34) goto block6; else goto block7;
block6:;
frost$core$String** $tmp35 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp36 = *$tmp35;
org$frostlang$frostc$ASTNode** $tmp37 = (org$frostlang$frostc$ASTNode**) (param0->$data + 8);
org$frostlang$frostc$ASTNode* $tmp38 = *$tmp37;
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
org$frostlang$frostc$ASTNode* $tmp39 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
*(&local2) = $tmp38;
// line 38
org$frostlang$frostc$ASTNode* $tmp40 = *(&local2);
frost$core$String* $tmp41 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s42, ((frost$core$Object*) $tmp40));
frost$core$String* $tmp43 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp41, &$s44);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
org$frostlang$frostc$ASTNode* $tmp45 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp45));
*(&local2) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp43;
block7:;
frost$core$Int64 $tmp46 = (frost$core$Int64) {3};
frost$core$Bit $tmp47 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp46);
bool $tmp48 = $tmp47.value;
if ($tmp48) goto block8; else goto block9;
block8:;
frost$core$String** $tmp49 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp50 = *$tmp49;
org$frostlang$frostc$ASTNode** $tmp51 = (org$frostlang$frostc$ASTNode**) (param0->$data + 8);
org$frostlang$frostc$ASTNode* $tmp52 = *$tmp51;
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
org$frostlang$frostc$ASTNode* $tmp53 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp53));
*(&local3) = $tmp52;
// line 39
org$frostlang$frostc$ASTNode* $tmp54 = *(&local3);
frost$core$String* $tmp55 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s56, ((frost$core$Object*) $tmp54));
frost$core$String* $tmp57 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp55, &$s58);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
org$frostlang$frostc$ASTNode* $tmp59 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp57;
block9:;
frost$core$Int64 $tmp60 = (frost$core$Int64) {4};
frost$core$Bit $tmp61 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp3, $tmp60);
bool $tmp62 = $tmp61.value;
if ($tmp62) goto block10; else goto block1;
block10:;
frost$core$String** $tmp63 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp64 = *$tmp63;
org$frostlang$frostc$ASTNode** $tmp65 = (org$frostlang$frostc$ASTNode**) (param0->$data + 8);
org$frostlang$frostc$ASTNode* $tmp66 = *$tmp65;
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
org$frostlang$frostc$ASTNode* $tmp67 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
*(&local4) = $tmp66;
// line 40
org$frostlang$frostc$ASTNode* $tmp68 = *(&local4);
frost$core$String* $tmp69 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s70, ((frost$core$Object*) $tmp68));
frost$core$String* $tmp71 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp69, &$s72);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
org$frostlang$frostc$ASTNode* $tmp73 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
*(&local4) = ((org$frostlang$frostc$ASTNode*) NULL);
return $tmp71;
block1:;
// line 42
goto block11;
block11:;
goto block11;
block12:;
goto block13;
block13:;

}
void org$frostlang$frostc$Annotations$Expression$cleanup(org$frostlang$frostc$Annotations$Expression* param0) {

frost$core$String* local0 = NULL;
org$frostlang$frostc$ASTNode* local1 = NULL;
frost$core$String* local2 = NULL;
org$frostlang$frostc$ASTNode* local3 = NULL;
frost$core$String* local4 = NULL;
org$frostlang$frostc$ASTNode* local5 = NULL;
frost$core$String* local6 = NULL;
org$frostlang$frostc$ASTNode* local7 = NULL;
frost$core$String* local8 = NULL;
org$frostlang$frostc$ASTNode* local9 = NULL;
// line 26
frost$core$Int64* $tmp74 = &param0->$rawValue;
frost$core$Int64 $tmp75 = *$tmp74;
frost$core$Int64 $tmp76 = (frost$core$Int64) {0};
frost$core$Bit $tmp77 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp75, $tmp76);
bool $tmp78 = $tmp77.value;
if ($tmp78) goto block2; else goto block3;
block2:;
frost$core$String** $tmp79 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp80 = *$tmp79;
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp80));
frost$core$String* $tmp81 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
*(&local0) = $tmp80;
org$frostlang$frostc$ASTNode** $tmp82 = (org$frostlang$frostc$ASTNode**) (param0->$data + 8);
org$frostlang$frostc$ASTNode* $tmp83 = *$tmp82;
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
org$frostlang$frostc$ASTNode* $tmp84 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
*(&local1) = $tmp83;
// line 1
frost$core$String* $tmp85 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
// line 1
org$frostlang$frostc$ASTNode* $tmp86 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
org$frostlang$frostc$ASTNode* $tmp87 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
*(&local1) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp88 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp88));
*(&local0) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Int64 $tmp89 = (frost$core$Int64) {1};
frost$core$Bit $tmp90 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp75, $tmp89);
bool $tmp91 = $tmp90.value;
if ($tmp91) goto block4; else goto block5;
block4:;
frost$core$String** $tmp92 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp93 = *$tmp92;
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp93));
frost$core$String* $tmp94 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
*(&local2) = $tmp93;
org$frostlang$frostc$ASTNode** $tmp95 = (org$frostlang$frostc$ASTNode**) (param0->$data + 8);
org$frostlang$frostc$ASTNode* $tmp96 = *$tmp95;
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp96));
org$frostlang$frostc$ASTNode* $tmp97 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp97));
*(&local3) = $tmp96;
// line 1
frost$core$String* $tmp98 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp98));
// line 1
org$frostlang$frostc$ASTNode* $tmp99 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
org$frostlang$frostc$ASTNode* $tmp100 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
*(&local3) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp101 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
*(&local2) = ((frost$core$String*) NULL);
goto block1;
block5:;
frost$core$Int64 $tmp102 = (frost$core$Int64) {2};
frost$core$Bit $tmp103 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp75, $tmp102);
bool $tmp104 = $tmp103.value;
if ($tmp104) goto block6; else goto block7;
block6:;
frost$core$String** $tmp105 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp106 = *$tmp105;
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
frost$core$String* $tmp107 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp107));
*(&local4) = $tmp106;
org$frostlang$frostc$ASTNode** $tmp108 = (org$frostlang$frostc$ASTNode**) (param0->$data + 8);
org$frostlang$frostc$ASTNode* $tmp109 = *$tmp108;
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp109));
org$frostlang$frostc$ASTNode* $tmp110 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
*(&local5) = $tmp109;
// line 1
frost$core$String* $tmp111 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp111));
// line 1
org$frostlang$frostc$ASTNode* $tmp112 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
org$frostlang$frostc$ASTNode* $tmp113 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp113));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp114 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp114));
*(&local4) = ((frost$core$String*) NULL);
goto block1;
block7:;
frost$core$Int64 $tmp115 = (frost$core$Int64) {3};
frost$core$Bit $tmp116 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp75, $tmp115);
bool $tmp117 = $tmp116.value;
if ($tmp117) goto block8; else goto block9;
block8:;
frost$core$String** $tmp118 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp119 = *$tmp118;
*(&local6) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp119));
frost$core$String* $tmp120 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
*(&local6) = $tmp119;
org$frostlang$frostc$ASTNode** $tmp121 = (org$frostlang$frostc$ASTNode**) (param0->$data + 8);
org$frostlang$frostc$ASTNode* $tmp122 = *$tmp121;
*(&local7) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
org$frostlang$frostc$ASTNode* $tmp123 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
*(&local7) = $tmp122;
// line 1
frost$core$String* $tmp124 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp124));
// line 1
org$frostlang$frostc$ASTNode* $tmp125 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp125));
org$frostlang$frostc$ASTNode* $tmp126 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp126));
*(&local7) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp127 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp127));
*(&local6) = ((frost$core$String*) NULL);
goto block1;
block9:;
frost$core$Int64 $tmp128 = (frost$core$Int64) {4};
frost$core$Bit $tmp129 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp75, $tmp128);
bool $tmp130 = $tmp129.value;
if ($tmp130) goto block10; else goto block1;
block10:;
frost$core$String** $tmp131 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp132 = *$tmp131;
*(&local8) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
frost$core$String* $tmp133 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
*(&local8) = $tmp132;
org$frostlang$frostc$ASTNode** $tmp134 = (org$frostlang$frostc$ASTNode**) (param0->$data + 8);
org$frostlang$frostc$ASTNode* $tmp135 = *$tmp134;
*(&local9) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
org$frostlang$frostc$ASTNode* $tmp136 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
*(&local9) = $tmp135;
// line 1
frost$core$String* $tmp137 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp137));
// line 1
org$frostlang$frostc$ASTNode* $tmp138 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp138));
org$frostlang$frostc$ASTNode* $tmp139 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp139));
*(&local9) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$String* $tmp140 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
*(&local8) = ((frost$core$String*) NULL);
goto block1;
block1:;
// line 26
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}
void org$frostlang$frostc$Annotations$Expression$init$frost$core$Int64$frost$core$String$org$frostlang$frostc$ASTNode(org$frostlang$frostc$Annotations$Expression* param0, frost$core$Int64 param1, frost$core$String* param2, org$frostlang$frostc$ASTNode* param3) {

// line 26
frost$core$Int64* $tmp141 = &param0->$rawValue;
*$tmp141 = param1;
// line 26
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$String** $tmp142 = (frost$core$String**) (param0->$data + 0);
*$tmp142 = param2;
// line 26
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$ASTNode** $tmp143 = (org$frostlang$frostc$ASTNode**) (param0->$data + 8);
*$tmp143 = param3;
return;

}







// Warning! This file is autogenerated.
#include <boost/text/word_break.hpp>

#include <gtest/gtest.h>

#include <algorithm>


TEST(word, breaks_12)
{
    // ÷ 0030 × 0030 ÷	
    // ÷ [0.2] DIGIT ZERO (Numeric) × [8.0] DIGIT ZERO (Numeric) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0030);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0030);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, false);
    }

    // ÷ 0030 × 0308 × 0030 ÷	
    // ÷ [0.2] DIGIT ZERO (Numeric) × [4.0] COMBINING DIAERESIS (Extend_FE) × [8.0] DIGIT ZERO (Numeric) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0030);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0030);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, false);
    }

    // ÷ 0030 × 005F ÷	
    // ÷ [0.2] DIGIT ZERO (Numeric) × [13.1] LOW LINE (ExtendNumLet) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0030);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x005F);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, false);
    }

    // ÷ 0030 × 0308 × 005F ÷	
    // ÷ [0.2] DIGIT ZERO (Numeric) × [4.0] COMBINING DIAERESIS (Extend_FE) × [13.1] LOW LINE (ExtendNumLet) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0030);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x005F);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, false);
    }

    // ÷ 0030 ÷ 1F1E6 ÷	
    // ÷ [0.2] DIGIT ZERO (Numeric) ÷ [999.0] REGIONAL INDICATOR SYMBOL LETTER A (RI) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0030);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x1F1E6);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 0030 × 0308 ÷ 1F1E6 ÷	
    // ÷ [0.2] DIGIT ZERO (Numeric) × [4.0] COMBINING DIAERESIS (Extend_FE) ÷ [999.0] REGIONAL INDICATOR SYMBOL LETTER A (RI) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0030);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x1F1E6);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 0030 × 05D0 ÷	
    // ÷ [0.2] DIGIT ZERO (Numeric) × [10.0] HEBREW LETTER ALEF (Hebrew_Letter) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0030);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x05D0);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, false);
    }

    // ÷ 0030 × 0308 × 05D0 ÷	
    // ÷ [0.2] DIGIT ZERO (Numeric) × [4.0] COMBINING DIAERESIS (Extend_FE) × [10.0] HEBREW LETTER ALEF (Hebrew_Letter) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0030);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x05D0);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, false);
    }

    // ÷ 0030 ÷ 0022 ÷	
    // ÷ [0.2] DIGIT ZERO (Numeric) ÷ [999.0] QUOTATION MARK (Double_Quote) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0030);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0022);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 0030 × 0308 ÷ 0022 ÷	
    // ÷ [0.2] DIGIT ZERO (Numeric) × [4.0] COMBINING DIAERESIS (Extend_FE) ÷ [999.0] QUOTATION MARK (Double_Quote) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0030);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0022);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 0030 ÷ 0027 ÷	
    // ÷ [0.2] DIGIT ZERO (Numeric) ÷ [999.0] APOSTROPHE (Single_Quote) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0030);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0027);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 0030 × 0308 ÷ 0027 ÷	
    // ÷ [0.2] DIGIT ZERO (Numeric) × [4.0] COMBINING DIAERESIS (Extend_FE) ÷ [999.0] APOSTROPHE (Single_Quote) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0030);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0027);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 0030 ÷ 261D ÷	
    // ÷ [0.2] DIGIT ZERO (Numeric) ÷ [999.0] WHITE UP POINTING INDEX (E_Base) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0030);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x261D);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 0030 × 0308 ÷ 261D ÷	
    // ÷ [0.2] DIGIT ZERO (Numeric) × [4.0] COMBINING DIAERESIS (Extend_FE) ÷ [999.0] WHITE UP POINTING INDEX (E_Base) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0030);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x261D);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 0030 ÷ 1F3FB ÷	
    // ÷ [0.2] DIGIT ZERO (Numeric) ÷ [999.0] EMOJI MODIFIER FITZPATRICK TYPE-1-2 (E_Modifier) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0030);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x1F3FB);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 0030 × 0308 ÷ 1F3FB ÷	
    // ÷ [0.2] DIGIT ZERO (Numeric) × [4.0] COMBINING DIAERESIS (Extend_FE) ÷ [999.0] EMOJI MODIFIER FITZPATRICK TYPE-1-2 (E_Modifier) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0030);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x1F3FB);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 0030 ÷ 2640 ÷	
    // ÷ [0.2] DIGIT ZERO (Numeric) ÷ [999.0] FEMALE SIGN (Glue_After_Zwj) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0030);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x2640);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 0030 × 0308 ÷ 2640 ÷	
    // ÷ [0.2] DIGIT ZERO (Numeric) × [4.0] COMBINING DIAERESIS (Extend_FE) ÷ [999.0] FEMALE SIGN (Glue_After_Zwj) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0030);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x2640);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 0030 ÷ 1F466 ÷	
    // ÷ [0.2] DIGIT ZERO (Numeric) ÷ [999.0] BOY (EBG) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0030);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x1F466);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 0030 × 0308 ÷ 1F466 ÷	
    // ÷ [0.2] DIGIT ZERO (Numeric) × [4.0] COMBINING DIAERESIS (Extend_FE) ÷ [999.0] BOY (EBG) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0030);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x1F466);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 0030 × 00AD ÷	
    // ÷ [0.2] DIGIT ZERO (Numeric) × [4.0] SOFT HYPHEN (Format_FE) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0030);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x00AD);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, false);
    }

    // ÷ 0030 × 0308 × 00AD ÷	
    // ÷ [0.2] DIGIT ZERO (Numeric) × [4.0] COMBINING DIAERESIS (Extend_FE) × [4.0] SOFT HYPHEN (Format_FE) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0030);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x00AD);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, false);
    }

    // ÷ 0030 × 0300 ÷	
    // ÷ [0.2] DIGIT ZERO (Numeric) × [4.0] COMBINING GRAVE ACCENT (Extend_FE) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0030);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0300);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, false);
    }

    // ÷ 0030 × 0308 × 0300 ÷	
    // ÷ [0.2] DIGIT ZERO (Numeric) × [4.0] COMBINING DIAERESIS (Extend_FE) × [4.0] COMBINING GRAVE ACCENT (Extend_FE) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0030);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0300);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, false);
    }

    // ÷ 0030 × 200D ÷	
    // ÷ [0.2] DIGIT ZERO (Numeric) × [4.0] ZERO WIDTH JOINER (ZWJ_FE) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0030);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x200D);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, false);
    }

    // ÷ 0030 × 0308 × 200D ÷	
    // ÷ [0.2] DIGIT ZERO (Numeric) × [4.0] COMBINING DIAERESIS (Extend_FE) × [4.0] ZERO WIDTH JOINER (ZWJ_FE) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0030);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x200D);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, false);
    }

    // ÷ 0030 × 0061 × 2060 ÷	
    // ÷ [0.2] DIGIT ZERO (Numeric) × [10.0] LATIN SMALL LETTER A (ALetter) × [4.0] WORD JOINER (Format_FE) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0030);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0061);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x2060);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, false);
    }

    // ÷ 0030 × 0308 × 0061 × 2060 ÷	
    // ÷ [0.2] DIGIT ZERO (Numeric) × [4.0] COMBINING DIAERESIS (Extend_FE) × [10.0] LATIN SMALL LETTER A (ALetter) × [4.0] WORD JOINER (Format_FE) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0030);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0061);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x2060);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, false);
    }

    // ÷ 0030 × 0061 ÷ 003A ÷	
    // ÷ [0.2] DIGIT ZERO (Numeric) × [10.0] LATIN SMALL LETTER A (ALetter) ÷ [999.0] COLON (MidLetter) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0030);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0061);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x003A);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 0030 × 0308 × 0061 ÷ 003A ÷	
    // ÷ [0.2] DIGIT ZERO (Numeric) × [4.0] COMBINING DIAERESIS (Extend_FE) × [10.0] LATIN SMALL LETTER A (ALetter) ÷ [999.0] COLON (MidLetter) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0030);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0061);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x003A);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 0030 × 0061 ÷ 0027 ÷	
    // ÷ [0.2] DIGIT ZERO (Numeric) × [10.0] LATIN SMALL LETTER A (ALetter) ÷ [999.0] APOSTROPHE (Single_Quote) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0030);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0061);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0027);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 0030 × 0308 × 0061 ÷ 0027 ÷	
    // ÷ [0.2] DIGIT ZERO (Numeric) × [4.0] COMBINING DIAERESIS (Extend_FE) × [10.0] LATIN SMALL LETTER A (ALetter) ÷ [999.0] APOSTROPHE (Single_Quote) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0030);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0061);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0027);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 0030 × 0061 ÷ 0027 × 2060 ÷	
    // ÷ [0.2] DIGIT ZERO (Numeric) × [10.0] LATIN SMALL LETTER A (ALetter) ÷ [999.0] APOSTROPHE (Single_Quote) × [4.0] WORD JOINER (Format_FE) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0030);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0061);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0027);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x2060);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, false);
    }

    // ÷ 0030 × 0308 × 0061 ÷ 0027 × 2060 ÷	
    // ÷ [0.2] DIGIT ZERO (Numeric) × [4.0] COMBINING DIAERESIS (Extend_FE) × [10.0] LATIN SMALL LETTER A (ALetter) ÷ [999.0] APOSTROPHE (Single_Quote) × [4.0] WORD JOINER (Format_FE) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0030);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0061);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0027);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x2060);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, false);
    }

    // ÷ 0030 × 0061 ÷ 002C ÷	
    // ÷ [0.2] DIGIT ZERO (Numeric) × [10.0] LATIN SMALL LETTER A (ALetter) ÷ [999.0] COMMA (MidNum) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0030);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0061);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x002C);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 0030 × 0308 × 0061 ÷ 002C ÷	
    // ÷ [0.2] DIGIT ZERO (Numeric) × [4.0] COMBINING DIAERESIS (Extend_FE) × [10.0] LATIN SMALL LETTER A (ALetter) ÷ [999.0] COMMA (MidNum) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0030);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0061);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x002C);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 0030 × 0031 ÷ 003A ÷	
    // ÷ [0.2] DIGIT ZERO (Numeric) × [8.0] DIGIT ONE (Numeric) ÷ [999.0] COLON (MidLetter) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0030);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0031);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x003A);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 0030 × 0308 × 0031 ÷ 003A ÷	
    // ÷ [0.2] DIGIT ZERO (Numeric) × [4.0] COMBINING DIAERESIS (Extend_FE) × [8.0] DIGIT ONE (Numeric) ÷ [999.0] COLON (MidLetter) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0030);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0031);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x003A);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 0030 × 0031 ÷ 0027 ÷	
    // ÷ [0.2] DIGIT ZERO (Numeric) × [8.0] DIGIT ONE (Numeric) ÷ [999.0] APOSTROPHE (Single_Quote) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0030);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0031);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0027);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 0030 × 0308 × 0031 ÷ 0027 ÷	
    // ÷ [0.2] DIGIT ZERO (Numeric) × [4.0] COMBINING DIAERESIS (Extend_FE) × [8.0] DIGIT ONE (Numeric) ÷ [999.0] APOSTROPHE (Single_Quote) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0030);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0031);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0027);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 0030 × 0031 ÷ 002C ÷	
    // ÷ [0.2] DIGIT ZERO (Numeric) × [8.0] DIGIT ONE (Numeric) ÷ [999.0] COMMA (MidNum) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0030);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0031);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x002C);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 0030 × 0308 × 0031 ÷ 002C ÷	
    // ÷ [0.2] DIGIT ZERO (Numeric) × [4.0] COMBINING DIAERESIS (Extend_FE) × [8.0] DIGIT ONE (Numeric) ÷ [999.0] COMMA (MidNum) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0030);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0031);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x002C);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 0030 × 0031 ÷ 002E × 2060 ÷	
    // ÷ [0.2] DIGIT ZERO (Numeric) × [8.0] DIGIT ONE (Numeric) ÷ [999.0] FULL STOP (MidNumLet) × [4.0] WORD JOINER (Format_FE) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0030);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0031);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x002E);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x2060);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, false);
    }

    // ÷ 0030 × 0308 × 0031 ÷ 002E × 2060 ÷	
    // ÷ [0.2] DIGIT ZERO (Numeric) × [4.0] COMBINING DIAERESIS (Extend_FE) × [8.0] DIGIT ONE (Numeric) ÷ [999.0] FULL STOP (MidNumLet) × [4.0] WORD JOINER (Format_FE) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0030);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0031);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x002E);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x2060);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, false);
    }

    // ÷ 005F ÷ 0001 ÷	
    // ÷ [0.2] LOW LINE (ExtendNumLet) ÷ [999.0] <START OF HEADING> (Other) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x005F);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0001);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 005F × 0308 ÷ 0001 ÷	
    // ÷ [0.2] LOW LINE (ExtendNumLet) × [4.0] COMBINING DIAERESIS (Extend_FE) ÷ [999.0] <START OF HEADING> (Other) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x005F);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0001);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 005F ÷ 000D ÷	
    // ÷ [0.2] LOW LINE (ExtendNumLet) ÷ [3.2] <CARRIAGE RETURN (CR)> (CR) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x005F);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x000D);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 005F × 0308 ÷ 000D ÷	
    // ÷ [0.2] LOW LINE (ExtendNumLet) × [4.0] COMBINING DIAERESIS (Extend_FE) ÷ [3.2] <CARRIAGE RETURN (CR)> (CR) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x005F);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x000D);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 005F ÷ 000A ÷	
    // ÷ [0.2] LOW LINE (ExtendNumLet) ÷ [3.2] <LINE FEED (LF)> (LF) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x005F);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x000A);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 005F × 0308 ÷ 000A ÷	
    // ÷ [0.2] LOW LINE (ExtendNumLet) × [4.0] COMBINING DIAERESIS (Extend_FE) ÷ [3.2] <LINE FEED (LF)> (LF) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x005F);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x000A);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

}

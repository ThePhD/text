// Warning! This file is autogenerated.
#include <boost/text/word_break.hpp>

#include <gtest/gtest.h>

#include <algorithm>


TEST(word, breaks_23)
{
    // ÷ 1F466 ÷ 0041 ÷	
    // ÷ [0.2] BOY (EBG) ÷ [999.0] LATIN CAPITAL LETTER A (ALetter) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x1F466);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0041);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 1F466 × 0308 ÷ 0041 ÷	
    // ÷ [0.2] BOY (EBG) × [4.0] COMBINING DIAERESIS (Extend_FE) ÷ [999.0] LATIN CAPITAL LETTER A (ALetter) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x1F466);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0041);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 1F466 ÷ 003A ÷	
    // ÷ [0.2] BOY (EBG) ÷ [999.0] COLON (MidLetter) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x1F466);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x003A);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 1F466 × 0308 ÷ 003A ÷	
    // ÷ [0.2] BOY (EBG) × [4.0] COMBINING DIAERESIS (Extend_FE) ÷ [999.0] COLON (MidLetter) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x1F466);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x003A);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 1F466 ÷ 002C ÷	
    // ÷ [0.2] BOY (EBG) ÷ [999.0] COMMA (MidNum) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x1F466);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x002C);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 1F466 × 0308 ÷ 002C ÷	
    // ÷ [0.2] BOY (EBG) × [4.0] COMBINING DIAERESIS (Extend_FE) ÷ [999.0] COMMA (MidNum) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x1F466);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x002C);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 1F466 ÷ 002E ÷	
    // ÷ [0.2] BOY (EBG) ÷ [999.0] FULL STOP (MidNumLet) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x1F466);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x002E);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 1F466 × 0308 ÷ 002E ÷	
    // ÷ [0.2] BOY (EBG) × [4.0] COMBINING DIAERESIS (Extend_FE) ÷ [999.0] FULL STOP (MidNumLet) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x1F466);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x002E);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 1F466 ÷ 0030 ÷	
    // ÷ [0.2] BOY (EBG) ÷ [999.0] DIGIT ZERO (Numeric) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x1F466);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0030);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 1F466 × 0308 ÷ 0030 ÷	
    // ÷ [0.2] BOY (EBG) × [4.0] COMBINING DIAERESIS (Extend_FE) ÷ [999.0] DIGIT ZERO (Numeric) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x1F466);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0030);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 1F466 ÷ 005F ÷	
    // ÷ [0.2] BOY (EBG) ÷ [999.0] LOW LINE (ExtendNumLet) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x1F466);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x005F);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 1F466 × 0308 ÷ 005F ÷	
    // ÷ [0.2] BOY (EBG) × [4.0] COMBINING DIAERESIS (Extend_FE) ÷ [999.0] LOW LINE (ExtendNumLet) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x1F466);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x005F);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 1F466 ÷ 1F1E6 ÷	
    // ÷ [0.2] BOY (EBG) ÷ [999.0] REGIONAL INDICATOR SYMBOL LETTER A (RI) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x1F466);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x1F1E6);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 1F466 × 0308 ÷ 1F1E6 ÷	
    // ÷ [0.2] BOY (EBG) × [4.0] COMBINING DIAERESIS (Extend_FE) ÷ [999.0] REGIONAL INDICATOR SYMBOL LETTER A (RI) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x1F466);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x1F1E6);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 1F466 ÷ 05D0 ÷	
    // ÷ [0.2] BOY (EBG) ÷ [999.0] HEBREW LETTER ALEF (Hebrew_Letter) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x1F466);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x05D0);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 1F466 × 0308 ÷ 05D0 ÷	
    // ÷ [0.2] BOY (EBG) × [4.0] COMBINING DIAERESIS (Extend_FE) ÷ [999.0] HEBREW LETTER ALEF (Hebrew_Letter) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x1F466);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x05D0);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 1F466 ÷ 0022 ÷	
    // ÷ [0.2] BOY (EBG) ÷ [999.0] QUOTATION MARK (Double_Quote) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x1F466);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0022);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 1F466 × 0308 ÷ 0022 ÷	
    // ÷ [0.2] BOY (EBG) × [4.0] COMBINING DIAERESIS (Extend_FE) ÷ [999.0] QUOTATION MARK (Double_Quote) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x1F466);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0022);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 1F466 ÷ 0027 ÷	
    // ÷ [0.2] BOY (EBG) ÷ [999.0] APOSTROPHE (Single_Quote) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x1F466);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0027);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 1F466 × 0308 ÷ 0027 ÷	
    // ÷ [0.2] BOY (EBG) × [4.0] COMBINING DIAERESIS (Extend_FE) ÷ [999.0] APOSTROPHE (Single_Quote) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x1F466);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0027);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 1F466 ÷ 261D ÷	
    // ÷ [0.2] BOY (EBG) ÷ [999.0] WHITE UP POINTING INDEX (E_Base) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x1F466);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x261D);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 1F466 × 0308 ÷ 261D ÷	
    // ÷ [0.2] BOY (EBG) × [4.0] COMBINING DIAERESIS (Extend_FE) ÷ [999.0] WHITE UP POINTING INDEX (E_Base) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x1F466);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x261D);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 1F466 × 1F3FB ÷	
    // ÷ [0.2] BOY (EBG) × [14.0] EMOJI MODIFIER FITZPATRICK TYPE-1-2 (E_Modifier) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x1F466);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x1F3FB);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, false);
    }

    // ÷ 1F466 × 0308 × 1F3FB ÷	
    // ÷ [0.2] BOY (EBG) × [4.0] COMBINING DIAERESIS (Extend_FE) × [14.0] EMOJI MODIFIER FITZPATRICK TYPE-1-2 (E_Modifier) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x1F466);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x1F3FB);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, false);
    }

    // ÷ 1F466 ÷ 2640 ÷	
    // ÷ [0.2] BOY (EBG) ÷ [999.0] FEMALE SIGN (Glue_After_Zwj) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x1F466);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x2640);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 1F466 × 0308 ÷ 2640 ÷	
    // ÷ [0.2] BOY (EBG) × [4.0] COMBINING DIAERESIS (Extend_FE) ÷ [999.0] FEMALE SIGN (Glue_After_Zwj) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x1F466);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x2640);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 1F466 ÷ 1F466 ÷	
    // ÷ [0.2] BOY (EBG) ÷ [999.0] BOY (EBG) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x1F466);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x1F466);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 1F466 × 0308 ÷ 1F466 ÷	
    // ÷ [0.2] BOY (EBG) × [4.0] COMBINING DIAERESIS (Extend_FE) ÷ [999.0] BOY (EBG) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x1F466);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x1F466);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 1F466 × 00AD ÷	
    // ÷ [0.2] BOY (EBG) × [4.0] SOFT HYPHEN (Format_FE) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x1F466);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x00AD);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, false);
    }

    // ÷ 1F466 × 0308 × 00AD ÷	
    // ÷ [0.2] BOY (EBG) × [4.0] COMBINING DIAERESIS (Extend_FE) × [4.0] SOFT HYPHEN (Format_FE) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x1F466);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x00AD);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, false);
    }

    // ÷ 1F466 × 0300 ÷	
    // ÷ [0.2] BOY (EBG) × [4.0] COMBINING GRAVE ACCENT (Extend_FE) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x1F466);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0300);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, false);
    }

    // ÷ 1F466 × 0308 × 0300 ÷	
    // ÷ [0.2] BOY (EBG) × [4.0] COMBINING DIAERESIS (Extend_FE) × [4.0] COMBINING GRAVE ACCENT (Extend_FE) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x1F466);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0300);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, false);
    }

    // ÷ 1F466 × 200D ÷	
    // ÷ [0.2] BOY (EBG) × [4.0] ZERO WIDTH JOINER (ZWJ_FE) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x1F466);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x200D);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, false);
    }

    // ÷ 1F466 × 0308 × 200D ÷	
    // ÷ [0.2] BOY (EBG) × [4.0] COMBINING DIAERESIS (Extend_FE) × [4.0] ZERO WIDTH JOINER (ZWJ_FE) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x1F466);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x200D);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, false);
    }

    // ÷ 1F466 ÷ 0061 × 2060 ÷	
    // ÷ [0.2] BOY (EBG) ÷ [999.0] LATIN SMALL LETTER A (ALetter) × [4.0] WORD JOINER (Format_FE) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x1F466);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0061);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x2060);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, false);
    }

    // ÷ 1F466 × 0308 ÷ 0061 × 2060 ÷	
    // ÷ [0.2] BOY (EBG) × [4.0] COMBINING DIAERESIS (Extend_FE) ÷ [999.0] LATIN SMALL LETTER A (ALetter) × [4.0] WORD JOINER (Format_FE) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x1F466);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0061);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x2060);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, false);
    }

    // ÷ 1F466 ÷ 0061 ÷ 003A ÷	
    // ÷ [0.2] BOY (EBG) ÷ [999.0] LATIN SMALL LETTER A (ALetter) ÷ [999.0] COLON (MidLetter) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x1F466);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0061);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x003A);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 1F466 × 0308 ÷ 0061 ÷ 003A ÷	
    // ÷ [0.2] BOY (EBG) × [4.0] COMBINING DIAERESIS (Extend_FE) ÷ [999.0] LATIN SMALL LETTER A (ALetter) ÷ [999.0] COLON (MidLetter) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x1F466);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0061);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x003A);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 1F466 ÷ 0061 ÷ 0027 ÷	
    // ÷ [0.2] BOY (EBG) ÷ [999.0] LATIN SMALL LETTER A (ALetter) ÷ [999.0] APOSTROPHE (Single_Quote) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x1F466);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0061);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0027);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 1F466 × 0308 ÷ 0061 ÷ 0027 ÷	
    // ÷ [0.2] BOY (EBG) × [4.0] COMBINING DIAERESIS (Extend_FE) ÷ [999.0] LATIN SMALL LETTER A (ALetter) ÷ [999.0] APOSTROPHE (Single_Quote) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x1F466);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0061);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0027);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 1F466 ÷ 0061 ÷ 0027 × 2060 ÷	
    // ÷ [0.2] BOY (EBG) ÷ [999.0] LATIN SMALL LETTER A (ALetter) ÷ [999.0] APOSTROPHE (Single_Quote) × [4.0] WORD JOINER (Format_FE) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x1F466);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0061);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0027);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x2060);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, false);
    }

    // ÷ 1F466 × 0308 ÷ 0061 ÷ 0027 × 2060 ÷	
    // ÷ [0.2] BOY (EBG) × [4.0] COMBINING DIAERESIS (Extend_FE) ÷ [999.0] LATIN SMALL LETTER A (ALetter) ÷ [999.0] APOSTROPHE (Single_Quote) × [4.0] WORD JOINER (Format_FE) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x1F466);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0061);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0027);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x2060);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, false);
    }

    // ÷ 1F466 ÷ 0061 ÷ 002C ÷	
    // ÷ [0.2] BOY (EBG) ÷ [999.0] LATIN SMALL LETTER A (ALetter) ÷ [999.0] COMMA (MidNum) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x1F466);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0061);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x002C);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 1F466 × 0308 ÷ 0061 ÷ 002C ÷	
    // ÷ [0.2] BOY (EBG) × [4.0] COMBINING DIAERESIS (Extend_FE) ÷ [999.0] LATIN SMALL LETTER A (ALetter) ÷ [999.0] COMMA (MidNum) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x1F466);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0061);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x002C);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 1F466 ÷ 0031 ÷ 003A ÷	
    // ÷ [0.2] BOY (EBG) ÷ [999.0] DIGIT ONE (Numeric) ÷ [999.0] COLON (MidLetter) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x1F466);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0031);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x003A);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 1F466 × 0308 ÷ 0031 ÷ 003A ÷	
    // ÷ [0.2] BOY (EBG) × [4.0] COMBINING DIAERESIS (Extend_FE) ÷ [999.0] DIGIT ONE (Numeric) ÷ [999.0] COLON (MidLetter) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x1F466);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0031);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x003A);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 1F466 ÷ 0031 ÷ 0027 ÷	
    // ÷ [0.2] BOY (EBG) ÷ [999.0] DIGIT ONE (Numeric) ÷ [999.0] APOSTROPHE (Single_Quote) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x1F466);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0031);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0027);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 1F466 × 0308 ÷ 0031 ÷ 0027 ÷	
    // ÷ [0.2] BOY (EBG) × [4.0] COMBINING DIAERESIS (Extend_FE) ÷ [999.0] DIGIT ONE (Numeric) ÷ [999.0] APOSTROPHE (Single_Quote) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x1F466);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0031);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0027);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 1F466 ÷ 0031 ÷ 002C ÷	
    // ÷ [0.2] BOY (EBG) ÷ [999.0] DIGIT ONE (Numeric) ÷ [999.0] COMMA (MidNum) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x1F466);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0031);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x002C);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 1F466 × 0308 ÷ 0031 ÷ 002C ÷	
    // ÷ [0.2] BOY (EBG) × [4.0] COMBINING DIAERESIS (Extend_FE) ÷ [999.0] DIGIT ONE (Numeric) ÷ [999.0] COMMA (MidNum) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x1F466);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0031);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x002C);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

}

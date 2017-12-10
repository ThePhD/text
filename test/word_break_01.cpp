// Warning! This file is autogenerated.
#include <boost/text/word_break.hpp>

#include <gtest/gtest.h>

#include <algorithm>


TEST(word, breaks_1)
{
    // ÷ 0001 ÷ 0022 ÷	
    // ÷ [0.2] <START OF HEADING> (Other) ÷ [999.0] QUOTATION MARK (Double_Quote) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0001);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0022);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 0001 × 0308 ÷ 0022 ÷	
    // ÷ [0.2] <START OF HEADING> (Other) × [4.0] COMBINING DIAERESIS (Extend_FE) ÷ [999.0] QUOTATION MARK (Double_Quote) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0001);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0022);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 0001 ÷ 0027 ÷	
    // ÷ [0.2] <START OF HEADING> (Other) ÷ [999.0] APOSTROPHE (Single_Quote) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0001);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0027);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 0001 × 0308 ÷ 0027 ÷	
    // ÷ [0.2] <START OF HEADING> (Other) × [4.0] COMBINING DIAERESIS (Extend_FE) ÷ [999.0] APOSTROPHE (Single_Quote) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0001);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0027);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 0001 ÷ 261D ÷	
    // ÷ [0.2] <START OF HEADING> (Other) ÷ [999.0] WHITE UP POINTING INDEX (E_Base) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0001);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x261D);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 0001 × 0308 ÷ 261D ÷	
    // ÷ [0.2] <START OF HEADING> (Other) × [4.0] COMBINING DIAERESIS (Extend_FE) ÷ [999.0] WHITE UP POINTING INDEX (E_Base) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0001);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x261D);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 0001 ÷ 1F3FB ÷	
    // ÷ [0.2] <START OF HEADING> (Other) ÷ [999.0] EMOJI MODIFIER FITZPATRICK TYPE-1-2 (E_Modifier) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0001);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x1F3FB);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 0001 × 0308 ÷ 1F3FB ÷	
    // ÷ [0.2] <START OF HEADING> (Other) × [4.0] COMBINING DIAERESIS (Extend_FE) ÷ [999.0] EMOJI MODIFIER FITZPATRICK TYPE-1-2 (E_Modifier) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0001);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x1F3FB);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 0001 ÷ 2640 ÷	
    // ÷ [0.2] <START OF HEADING> (Other) ÷ [999.0] FEMALE SIGN (Glue_After_Zwj) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0001);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x2640);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 0001 × 0308 ÷ 2640 ÷	
    // ÷ [0.2] <START OF HEADING> (Other) × [4.0] COMBINING DIAERESIS (Extend_FE) ÷ [999.0] FEMALE SIGN (Glue_After_Zwj) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0001);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x2640);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 0001 ÷ 1F466 ÷	
    // ÷ [0.2] <START OF HEADING> (Other) ÷ [999.0] BOY (EBG) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0001);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x1F466);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 0001 × 0308 ÷ 1F466 ÷	
    // ÷ [0.2] <START OF HEADING> (Other) × [4.0] COMBINING DIAERESIS (Extend_FE) ÷ [999.0] BOY (EBG) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0001);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x1F466);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 0001 × 00AD ÷	
    // ÷ [0.2] <START OF HEADING> (Other) × [4.0] SOFT HYPHEN (Format_FE) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0001);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x00AD);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, false);
    }

    // ÷ 0001 × 0308 × 00AD ÷	
    // ÷ [0.2] <START OF HEADING> (Other) × [4.0] COMBINING DIAERESIS (Extend_FE) × [4.0] SOFT HYPHEN (Format_FE) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0001);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x00AD);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, false);
    }

    // ÷ 0001 × 0300 ÷	
    // ÷ [0.2] <START OF HEADING> (Other) × [4.0] COMBINING GRAVE ACCENT (Extend_FE) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0001);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0300);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, false);
    }

    // ÷ 0001 × 0308 × 0300 ÷	
    // ÷ [0.2] <START OF HEADING> (Other) × [4.0] COMBINING DIAERESIS (Extend_FE) × [4.0] COMBINING GRAVE ACCENT (Extend_FE) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0001);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0300);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, false);
    }

    // ÷ 0001 × 200D ÷	
    // ÷ [0.2] <START OF HEADING> (Other) × [4.0] ZERO WIDTH JOINER (ZWJ_FE) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0001);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x200D);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, false);
    }

    // ÷ 0001 × 0308 × 200D ÷	
    // ÷ [0.2] <START OF HEADING> (Other) × [4.0] COMBINING DIAERESIS (Extend_FE) × [4.0] ZERO WIDTH JOINER (ZWJ_FE) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0001);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x200D);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, false);
    }

    // ÷ 0001 ÷ 0061 × 2060 ÷	
    // ÷ [0.2] <START OF HEADING> (Other) ÷ [999.0] LATIN SMALL LETTER A (ALetter) × [4.0] WORD JOINER (Format_FE) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0001);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0061);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x2060);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, false);
    }

    // ÷ 0001 × 0308 ÷ 0061 × 2060 ÷	
    // ÷ [0.2] <START OF HEADING> (Other) × [4.0] COMBINING DIAERESIS (Extend_FE) ÷ [999.0] LATIN SMALL LETTER A (ALetter) × [4.0] WORD JOINER (Format_FE) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0001);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0061);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x2060);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, false);
    }

    // ÷ 0001 ÷ 0061 ÷ 003A ÷	
    // ÷ [0.2] <START OF HEADING> (Other) ÷ [999.0] LATIN SMALL LETTER A (ALetter) ÷ [999.0] COLON (MidLetter) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0001);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0061);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x003A);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 0001 × 0308 ÷ 0061 ÷ 003A ÷	
    // ÷ [0.2] <START OF HEADING> (Other) × [4.0] COMBINING DIAERESIS (Extend_FE) ÷ [999.0] LATIN SMALL LETTER A (ALetter) ÷ [999.0] COLON (MidLetter) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0001);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0061);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x003A);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 0001 ÷ 0061 ÷ 0027 ÷	
    // ÷ [0.2] <START OF HEADING> (Other) ÷ [999.0] LATIN SMALL LETTER A (ALetter) ÷ [999.0] APOSTROPHE (Single_Quote) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0001);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0061);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0027);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 0001 × 0308 ÷ 0061 ÷ 0027 ÷	
    // ÷ [0.2] <START OF HEADING> (Other) × [4.0] COMBINING DIAERESIS (Extend_FE) ÷ [999.0] LATIN SMALL LETTER A (ALetter) ÷ [999.0] APOSTROPHE (Single_Quote) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0001);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0061);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0027);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 0001 ÷ 0061 ÷ 0027 × 2060 ÷	
    // ÷ [0.2] <START OF HEADING> (Other) ÷ [999.0] LATIN SMALL LETTER A (ALetter) ÷ [999.0] APOSTROPHE (Single_Quote) × [4.0] WORD JOINER (Format_FE) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0001);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0061);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0027);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x2060);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, false);
    }

    // ÷ 0001 × 0308 ÷ 0061 ÷ 0027 × 2060 ÷	
    // ÷ [0.2] <START OF HEADING> (Other) × [4.0] COMBINING DIAERESIS (Extend_FE) ÷ [999.0] LATIN SMALL LETTER A (ALetter) ÷ [999.0] APOSTROPHE (Single_Quote) × [4.0] WORD JOINER (Format_FE) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0001);

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

    // ÷ 0001 ÷ 0061 ÷ 002C ÷	
    // ÷ [0.2] <START OF HEADING> (Other) ÷ [999.0] LATIN SMALL LETTER A (ALetter) ÷ [999.0] COMMA (MidNum) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0001);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0061);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x002C);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 0001 × 0308 ÷ 0061 ÷ 002C ÷	
    // ÷ [0.2] <START OF HEADING> (Other) × [4.0] COMBINING DIAERESIS (Extend_FE) ÷ [999.0] LATIN SMALL LETTER A (ALetter) ÷ [999.0] COMMA (MidNum) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0001);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0061);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x002C);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 0001 ÷ 0031 ÷ 003A ÷	
    // ÷ [0.2] <START OF HEADING> (Other) ÷ [999.0] DIGIT ONE (Numeric) ÷ [999.0] COLON (MidLetter) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0001);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0031);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x003A);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 0001 × 0308 ÷ 0031 ÷ 003A ÷	
    // ÷ [0.2] <START OF HEADING> (Other) × [4.0] COMBINING DIAERESIS (Extend_FE) ÷ [999.0] DIGIT ONE (Numeric) ÷ [999.0] COLON (MidLetter) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0001);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0031);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x003A);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 0001 ÷ 0031 ÷ 0027 ÷	
    // ÷ [0.2] <START OF HEADING> (Other) ÷ [999.0] DIGIT ONE (Numeric) ÷ [999.0] APOSTROPHE (Single_Quote) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0001);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0031);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0027);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 0001 × 0308 ÷ 0031 ÷ 0027 ÷	
    // ÷ [0.2] <START OF HEADING> (Other) × [4.0] COMBINING DIAERESIS (Extend_FE) ÷ [999.0] DIGIT ONE (Numeric) ÷ [999.0] APOSTROPHE (Single_Quote) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0001);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0031);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0027);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 0001 ÷ 0031 ÷ 002C ÷	
    // ÷ [0.2] <START OF HEADING> (Other) ÷ [999.0] DIGIT ONE (Numeric) ÷ [999.0] COMMA (MidNum) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0001);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0031);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x002C);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 0001 × 0308 ÷ 0031 ÷ 002C ÷	
    // ÷ [0.2] <START OF HEADING> (Other) × [4.0] COMBINING DIAERESIS (Extend_FE) ÷ [999.0] DIGIT ONE (Numeric) ÷ [999.0] COMMA (MidNum) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0001);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0031);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x002C);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 0001 ÷ 0031 ÷ 002E × 2060 ÷	
    // ÷ [0.2] <START OF HEADING> (Other) ÷ [999.0] DIGIT ONE (Numeric) ÷ [999.0] FULL STOP (MidNumLet) × [4.0] WORD JOINER (Format_FE) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0001);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0031);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x002E);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x2060);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, false);
    }

    // ÷ 0001 × 0308 ÷ 0031 ÷ 002E × 2060 ÷	
    // ÷ [0.2] <START OF HEADING> (Other) × [4.0] COMBINING DIAERESIS (Extend_FE) ÷ [999.0] DIGIT ONE (Numeric) ÷ [999.0] FULL STOP (MidNumLet) × [4.0] WORD JOINER (Format_FE) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0001);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0031);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x002E);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x2060);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, false);
    }

    // ÷ 000D ÷ 0001 ÷	
    // ÷ [0.2] <CARRIAGE RETURN (CR)> (CR) ÷ [3.1] <START OF HEADING> (Other) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x000D);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0001);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 000D ÷ 0308 ÷ 0001 ÷	
    // ÷ [0.2] <CARRIAGE RETURN (CR)> (CR) ÷ [3.1] COMBINING DIAERESIS (Extend_FE) ÷ [999.0] <START OF HEADING> (Other) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x000D);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0001);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 000D ÷ 000D ÷	
    // ÷ [0.2] <CARRIAGE RETURN (CR)> (CR) ÷ [3.1] <CARRIAGE RETURN (CR)> (CR) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x000D);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x000D);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 000D ÷ 0308 ÷ 000D ÷	
    // ÷ [0.2] <CARRIAGE RETURN (CR)> (CR) ÷ [3.1] COMBINING DIAERESIS (Extend_FE) ÷ [3.2] <CARRIAGE RETURN (CR)> (CR) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x000D);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x000D);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 000D × 000A ÷	
    // ÷ [0.2] <CARRIAGE RETURN (CR)> (CR) × [3.0] <LINE FEED (LF)> (LF) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x000D);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x000A);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, false);
    }

    // ÷ 000D ÷ 0308 ÷ 000A ÷	
    // ÷ [0.2] <CARRIAGE RETURN (CR)> (CR) ÷ [3.1] COMBINING DIAERESIS (Extend_FE) ÷ [3.2] <LINE FEED (LF)> (LF) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x000D);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x000A);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 000D ÷ 000B ÷	
    // ÷ [0.2] <CARRIAGE RETURN (CR)> (CR) ÷ [3.1] <LINE TABULATION> (Newline) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x000D);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x000B);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 000D ÷ 0308 ÷ 000B ÷	
    // ÷ [0.2] <CARRIAGE RETURN (CR)> (CR) ÷ [3.1] COMBINING DIAERESIS (Extend_FE) ÷ [3.2] <LINE TABULATION> (Newline) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x000D);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x000B);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 000D ÷ 3031 ÷	
    // ÷ [0.2] <CARRIAGE RETURN (CR)> (CR) ÷ [3.1] VERTICAL KANA REPEAT MARK (Katakana) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x000D);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x3031);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 000D ÷ 0308 ÷ 3031 ÷	
    // ÷ [0.2] <CARRIAGE RETURN (CR)> (CR) ÷ [3.1] COMBINING DIAERESIS (Extend_FE) ÷ [999.0] VERTICAL KANA REPEAT MARK (Katakana) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x000D);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x3031);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 000D ÷ 0041 ÷	
    // ÷ [0.2] <CARRIAGE RETURN (CR)> (CR) ÷ [3.1] LATIN CAPITAL LETTER A (ALetter) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x000D);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0041);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 000D ÷ 0308 ÷ 0041 ÷	
    // ÷ [0.2] <CARRIAGE RETURN (CR)> (CR) ÷ [3.1] COMBINING DIAERESIS (Extend_FE) ÷ [999.0] LATIN CAPITAL LETTER A (ALetter) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x000D);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0041);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 000D ÷ 003A ÷	
    // ÷ [0.2] <CARRIAGE RETURN (CR)> (CR) ÷ [3.1] COLON (MidLetter) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x000D);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x003A);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 000D ÷ 0308 ÷ 003A ÷	
    // ÷ [0.2] <CARRIAGE RETURN (CR)> (CR) ÷ [3.1] COMBINING DIAERESIS (Extend_FE) ÷ [999.0] COLON (MidLetter) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x000D);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x003A);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

}

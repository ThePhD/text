// Warning! This file is autogenerated.
#include <boost/text/word_break.hpp>

#include <gtest/gtest.h>

#include <algorithm>


TEST(word, breaks_0)
{
    // ÷ 0001 ÷ 0001 ÷	
    // ÷ [0.2] <START OF HEADING> (Other) ÷ [999.0] <START OF HEADING> (Other) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0001);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0001);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 0001 × 0308 ÷ 0001 ÷	
    // ÷ [0.2] <START OF HEADING> (Other) × [4.0] COMBINING DIAERESIS (Extend_FE) ÷ [999.0] <START OF HEADING> (Other) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0001);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0001);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 0001 ÷ 000D ÷	
    // ÷ [0.2] <START OF HEADING> (Other) ÷ [3.2] <CARRIAGE RETURN (CR)> (CR) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0001);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x000D);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 0001 × 0308 ÷ 000D ÷	
    // ÷ [0.2] <START OF HEADING> (Other) × [4.0] COMBINING DIAERESIS (Extend_FE) ÷ [3.2] <CARRIAGE RETURN (CR)> (CR) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0001);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x000D);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 0001 ÷ 000A ÷	
    // ÷ [0.2] <START OF HEADING> (Other) ÷ [3.2] <LINE FEED (LF)> (LF) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0001);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x000A);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 0001 × 0308 ÷ 000A ÷	
    // ÷ [0.2] <START OF HEADING> (Other) × [4.0] COMBINING DIAERESIS (Extend_FE) ÷ [3.2] <LINE FEED (LF)> (LF) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0001);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x000A);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 0001 ÷ 000B ÷	
    // ÷ [0.2] <START OF HEADING> (Other) ÷ [3.2] <LINE TABULATION> (Newline) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0001);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x000B);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 0001 × 0308 ÷ 000B ÷	
    // ÷ [0.2] <START OF HEADING> (Other) × [4.0] COMBINING DIAERESIS (Extend_FE) ÷ [3.2] <LINE TABULATION> (Newline) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0001);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x000B);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 0001 ÷ 3031 ÷	
    // ÷ [0.2] <START OF HEADING> (Other) ÷ [999.0] VERTICAL KANA REPEAT MARK (Katakana) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0001);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x3031);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 0001 × 0308 ÷ 3031 ÷	
    // ÷ [0.2] <START OF HEADING> (Other) × [4.0] COMBINING DIAERESIS (Extend_FE) ÷ [999.0] VERTICAL KANA REPEAT MARK (Katakana) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0001);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x3031);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 0001 ÷ 0041 ÷	
    // ÷ [0.2] <START OF HEADING> (Other) ÷ [999.0] LATIN CAPITAL LETTER A (ALetter) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0001);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0041);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 0001 × 0308 ÷ 0041 ÷	
    // ÷ [0.2] <START OF HEADING> (Other) × [4.0] COMBINING DIAERESIS (Extend_FE) ÷ [999.0] LATIN CAPITAL LETTER A (ALetter) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0001);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0041);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 0001 ÷ 003A ÷	
    // ÷ [0.2] <START OF HEADING> (Other) ÷ [999.0] COLON (MidLetter) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0001);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x003A);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 0001 × 0308 ÷ 003A ÷	
    // ÷ [0.2] <START OF HEADING> (Other) × [4.0] COMBINING DIAERESIS (Extend_FE) ÷ [999.0] COLON (MidLetter) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0001);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x003A);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 0001 ÷ 002C ÷	
    // ÷ [0.2] <START OF HEADING> (Other) ÷ [999.0] COMMA (MidNum) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0001);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x002C);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 0001 × 0308 ÷ 002C ÷	
    // ÷ [0.2] <START OF HEADING> (Other) × [4.0] COMBINING DIAERESIS (Extend_FE) ÷ [999.0] COMMA (MidNum) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0001);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x002C);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 0001 ÷ 002E ÷	
    // ÷ [0.2] <START OF HEADING> (Other) ÷ [999.0] FULL STOP (MidNumLet) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0001);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x002E);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 0001 × 0308 ÷ 002E ÷	
    // ÷ [0.2] <START OF HEADING> (Other) × [4.0] COMBINING DIAERESIS (Extend_FE) ÷ [999.0] FULL STOP (MidNumLet) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0001);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x002E);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 0001 ÷ 0030 ÷	
    // ÷ [0.2] <START OF HEADING> (Other) ÷ [999.0] DIGIT ZERO (Numeric) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0001);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0030);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 0001 × 0308 ÷ 0030 ÷	
    // ÷ [0.2] <START OF HEADING> (Other) × [4.0] COMBINING DIAERESIS (Extend_FE) ÷ [999.0] DIGIT ZERO (Numeric) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0001);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0030);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 0001 ÷ 005F ÷	
    // ÷ [0.2] <START OF HEADING> (Other) ÷ [999.0] LOW LINE (ExtendNumLet) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0001);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x005F);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 0001 × 0308 ÷ 005F ÷	
    // ÷ [0.2] <START OF HEADING> (Other) × [4.0] COMBINING DIAERESIS (Extend_FE) ÷ [999.0] LOW LINE (ExtendNumLet) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0001);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x005F);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 0001 ÷ 1F1E6 ÷	
    // ÷ [0.2] <START OF HEADING> (Other) ÷ [999.0] REGIONAL INDICATOR SYMBOL LETTER A (RI) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0001);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x1F1E6);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 0001 × 0308 ÷ 1F1E6 ÷	
    // ÷ [0.2] <START OF HEADING> (Other) × [4.0] COMBINING DIAERESIS (Extend_FE) ÷ [999.0] REGIONAL INDICATOR SYMBOL LETTER A (RI) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0001);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x1F1E6);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 0001 ÷ 05D0 ÷	
    // ÷ [0.2] <START OF HEADING> (Other) ÷ [999.0] HEBREW LETTER ALEF (Hebrew_Letter) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0001);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x05D0);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

    // ÷ 0001 × 0308 ÷ 05D0 ÷	
    // ÷ [0.2] <START OF HEADING> (Other) × [4.0] COMBINING DIAERESIS (Extend_FE) ÷ [999.0] HEBREW LETTER ALEF (Hebrew_Letter) ÷ [0.3]
    {
        boost::text::word_break_t prev_break;

        prev_break.prop_ = boost::text::word_prop(0x0001);

        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0308);
        EXPECT_EQ(prev_break.break_, true);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x05D0);
        EXPECT_EQ(prev_break.break_, false);
        prev_break = boost::text::word_break(prev_break.fsm_, prev_break.prev_prop_, prev_break.prop_, 0x0);
        EXPECT_EQ(prev_break.break_, true);
    }

}

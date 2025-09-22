#include <gtest/gtest.h>
#include "../include/replacer.h"

TEST(Task1Tests, Example) {
    EXPECT_EQ(replace("Vader said: No, I am your father!", 2, 'a', 'o'), "Vader soid: No, I am your fother!");
}

TEST(Task1Tests, Simple) {
    EXPECT_EQ(replace("aaaa", 2, 'a', 'b'), "abab");
    EXPECT_EQ(replace("R2-R2", 2, 'R', 'D'), "R2-D2");
}

TEST(Task1Tests, UnchangedSituations) {
    EXPECT_EQ(replace("wowowow", -2, 'w', 'x'), "wowowow");
    EXPECT_EQ(replace("hello", 0, 'l', 'x'), "hello");
    EXPECT_EQ(replace("what", 1, 'x', 's'), "what");
}

TEST(Task1Tests, Empty) {
    EXPECT_EQ(replace("", 2, 'a', 'b'), "");
}

TEST(Task1Tests, LargeN) {
    EXPECT_EQ(replace("coco", 3, 'c', 'n'), "coco");
}

TEST(Task1Tests, FullReplace) {
    EXPECT_EQ(replace("LLLLL", 1, 'L', 'O'), "OOOOO");
}


#include <iostream>
#include <gtest/gtest.h>
#include "LibraryCode.h"
#include "test.h"

TEST(TestCountPositive, BasicTest)
{
    // Arrange
    bool test;

    // Act
    test = true;

    // Assert
    ASSERT_TRUE(test);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
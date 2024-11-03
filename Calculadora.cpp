#include <gtest/gtest.h>

class Calculator {
public:
    int Add(int a, int b) { return a + b; }
    int Subtract(int a, int b) { return a - b; }
};


class CalculatorTest : public ::testing::Test {
protected:
    Calculator calc;

    void SetUp() override {

    }

    void TearDown() override {

    }
};


TEST_F(CalculatorTest, AddTest) {
    EXPECT_EQ(calc.Add(1, 1), 2);
    EXPECT_EQ(calc.Add(-1, 1), 0);
    EXPECT_EQ(calc.Add(-1, -1), -2);
}


TEST_F(CalculatorTest, SubtractTest) {
    EXPECT_EQ(calc.Subtract(2, 1), 1);
    EXPECT_EQ(calc.Subtract(-1, 1), -2);
    EXPECT_EQ(calc.Subtract(-1, -1), 0);
}


int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

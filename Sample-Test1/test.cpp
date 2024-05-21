#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "../teamwork/calc.cpp"

TEST(TestCaseName, TestName) {
	Calc calc; 
	int ret = calc.getSum(1, 2); 
	EXPECT_EQ(ret, 3);
}
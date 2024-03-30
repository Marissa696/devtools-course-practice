// Copyright 2024 Saratova Marina

#include <gtest/gtest.h>
#include "include/complex_number.h"

TEST(Saratova_Marina_Complex_Numbers, Test_Setters_Of_Complex_Numbers) {
    ComplexNumber z;
    z.setRe(2.0);
    z.setIm(3.0);
    EXPECT_DOUBLE_EQ(2.0, z.getRe());
    EXPECT_DOUBLE_EQ(3.0, z.getIm());
}

TEST(Saratova_Marina_Complex_Numbers, Test_Can_Create_Complex_Number) {
    ComplexNumber z(2.0, 1.0);
    EXPECT_DOUBLE_EQ(2.0, z.getRe());
    EXPECT_DOUBLE_EQ(1.0, z.getIm());
}

TEST(Saratova_Marina_Complex_Numbers, Test_Operator_Equality_Of_Complex_Numbers) {
  ComplexNumber z1(2.0, 3.0);
  ComplexNumber z2(4.0, 5.0);
  ComplexNumber z3(2.0, 3.0);

  EXPECT_FALSE(z1 == z2);
  EXPECT_TRUE(z1 == z3);
  EXPECT_FALSE(z2 == z3);
}

TEST(Saratova_Marina_Complex_Numbers, Test_Sum_Of_Complex_Numbers) {
  ComplexNumber a(2.0, 3.0);
  ComplexNumber b(4.0, 5.0);
  ComplexNumber z = a + b;
  EXPECT_DOUBLE_EQ(6.0, z.getRe());
  EXPECT_DOUBLE_EQ(8.0, z.getIm());
}

TEST(Saratova_Marina_Complex_Numbers, Test_Difference_Of_Complex_Numbers) {
  ComplexNumber a(2.0, 3.0);
  ComplexNumber b(4.0, 5.0);
  ComplexNumber z = b - a;
  EXPECT_DOUBLE_EQ(2.0, z.getRe());
  EXPECT_DOUBLE_EQ(2.0, z.getIm());
}

TEST(Saratova_Marina_Complex_Numbers, Test_Multiply_Of_Complex_Numbers) {
  ComplexNumber a(2.0, 3.0);
  ComplexNumber b(4.0, 5.0);
  ComplexNumber z = a * b;
  EXPECT_DOUBLE_EQ(2.0 * 4.0 - 3.0 * 5.0, z.getRe());
  EXPECT_DOUBLE_EQ(2.0 * 5.0 + 3.0 * 4.0, z.getIm());
}

TEST(Saratova_Marina_Complex_Numbers, Test_Divide_Complex_Number_By_Zero) {
    ComplexNumber z1(2.0, 3.0);
    ComplexNumber z2(0, 0);
    EXPECT_ANY_THROW(z1 / z2);
}

#include "pch.h"
#include "vector.h"

TEST(test, TestAdd) {
	vectorClass expected = vectorClass(-1, 3, 4);
	vectorClass actual = vectorClass(4, 2, 1) + vectorClass(-5, 1, 3);
	EXPECT_EQ(expected.getX(), actual.getX());
	EXPECT_EQ(expected.getY(), actual.getY());
	EXPECT_EQ(expected.getZ(), actual.getZ());
}

TEST(test, TestSubstract) {
	vectorClass expected = vectorClass(-1, 3, 4);
	vectorClass actual = vectorClass(10, -2, 4) - vectorClass(11, -5, 0);
	EXPECT_EQ(expected.getX(), actual.getX());
	EXPECT_EQ(expected.getY(), actual.getY());
	EXPECT_EQ(expected.getZ(), actual.getZ());
}

TEST(test, TestDotProduct) {
	int expected = 25;
	int actual = vectorClass(3, 4, 0) * vectorClass(3, 4, 0);
	EXPECT_EQ(expected, actual);
}

TEST(test, TestCrossProduct) {
	vectorClass expected = vectorClass(23, 11, -9);
	vectorClass actual = vectorClass(1, 2, 5) | vectorClass(3, -3, 4);
	EXPECT_EQ(expected.getX(), actual.getX());
	EXPECT_EQ(expected.getY(), actual.getY());
	EXPECT_EQ(expected.getZ(), actual.getZ());
}

int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
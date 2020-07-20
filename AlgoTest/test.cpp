#include "pch.h"
#include "sort.h"

TEST(SelectionSort, CheckResult) {
	int ascArr[6] = {3, 2, 7, 5, 6, 1};
	AlgoLib::SelectionSort(ascArr, 6, AlgoLib::ESortMethod::Ascending);
	int ascSortedArr[6] = {1,2,3,5,6,7};

	for (int i = 0; i < 6; ++i)
	{
		EXPECT_TRUE(ascArr[i] == ascSortedArr[i]);
	}

	int descArr[6] = { 3, 2, 7, 5, 6, 1 };
	AlgoLib::SelectionSort(descArr, 6, AlgoLib::ESortMethod::Descending);
	int descSortedArr[6] = { 7,6,5,3,2,1 };
	for (int i = 0; i < 6; ++i)
	{
		EXPECT_TRUE(descArr[i] == descSortedArr[i]);
	}

	int predArr[6] = { 3, 2, 7, 5, 6, 1 };
	AlgoLib::SelectionSort<int>(predArr, 6, [](int a, int b)->bool
		{
			return a > b;
		});
	int predSortedArr[6] = { 1,2,3,5,6,7};
	for (int i = 0; i < 6; ++i)
	{
		EXPECT_TRUE(predArr[i] == predSortedArr[i]);
	}
}

TEST(BubbleSort, CheckResult) {
	int ascArr[6] = { 3, 2, 7, 5, 6, 1 };
	AlgoLib::BubbleSort(ascArr, 6, AlgoLib::ESortMethod::Ascending);
	int ascSortedArr[6] = { 1,2,3,5,6,7 };
	for (int i = 0; i < 6; ++i)
	{
		EXPECT_TRUE(ascArr[i] == ascSortedArr[i]);
	}

	int descArr[6] = { 3, 2, 7, 5, 6, 1 };
	AlgoLib::BubbleSort(descArr, 6, AlgoLib::ESortMethod::Descending);
	int descSortedArr[6] = { 7,6,5,3,2,1 };
	for (int i = 0; i < 6; ++i)
	{
		EXPECT_TRUE(descArr[i] == descSortedArr[i]);
	}
}

TEST(InsertionSort, CheckResult) {
	int ascArr[6] = { 3, 2, 7, 5, 6, 1 };
	AlgoLib::InsertionSort(ascArr, 6, AlgoLib::ESortMethod::Ascending);
	int ascSortedArr[6] = { 1,2,3,5,6,7 };
	for (int i = 0; i < 6; ++i)
	{
		EXPECT_TRUE(ascArr[i] == ascSortedArr[i]);
	}

	int descArr[6] = { 3, 2, 7, 5, 6, 1 };
	AlgoLib::InsertionSort(descArr, 6, AlgoLib::ESortMethod::Descending);
	int descSortedArr[6] = { 7,6,5,3,2,1 };
	for (int i = 0; i < 6; ++i)
	{
		EXPECT_TRUE(descArr[i] == descSortedArr[i]);
	}

	int predArr[6] = { 3, 2, 7, 5, 6, 1 };
	AlgoLib::InsertionSort<int>(predArr, 6, [](int a, int b)->bool
		{
			return a > b;
		});
	int predSortedArr[6] = { 1,2,3,5,6,7 };
	for (int i = 0; i < 6; ++i)
	{
		EXPECT_TRUE(predArr[i] == predSortedArr[i]);
	}
}
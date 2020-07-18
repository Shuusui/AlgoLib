#include "pch.h"
#include "sort.h"

TEST(SelectionSort, CheckResult) {
	int arr[6] = {3, 2, 7, 5, 6, 1};
	AlgoLib::SelectionSort<int>(arr, 6);
	int sortedArr[6] = {1,2,3,5,6,7};

	for (int i = 0; i < 6; ++i)
	{
		EXPECT_TRUE(arr[i] == sortedArr[i]);
	}
}
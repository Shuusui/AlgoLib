#pragma once

namespace AlgoLib
{
	template <typename T>
	static void SelectionSort(T arr[], const size_t& size)
	{
		for (size_t i = 0; i < size; ++i)
		{
			size_t minIndex = i;
			for (size_t j = i+1; j < size; ++j)
			{
				if (arr[minIndex] < arr[j])
				{
					continue;
				}
				minIndex = j;
			}
			T tempElement = arr[i];
			arr[i] = arr[minIndex];
			arr[minIndex] = tempElement;
		}
	}

	template <typename T>
	static void BubbleSort(T arr[], const size_t& size)
	{
		bool bIsSorted = false;
		while (!bIsSorted)
		{
			bool bHadToGetModified = false;
			for (size_t i = 1; i < size; ++i)
			{
				if (arr[i - 1] < arr[i])
				{
					continue;
				}
				T tempElement = arr[i];
				arr[i] = arr[i-1];
				arr[i-1] = tempElement;
				bHadToGetModified = true;
			}
			if (!bHadToGetModified)
			{
				bIsSorted = true;
			}
		}
	}

	template <typename T>
	static void InsertionSort(T arr[], const size_t& size)
	{
		for (size_t i = 1; i < size; ++i)
		{
			for (size_t j = 0; j < i; ++j)
			{
				if (arr[i] > arr[j])
				{
					continue;
				}
				for (size_t k = j; k < i; ++k)
				{

				}
			}
		}
	}
}
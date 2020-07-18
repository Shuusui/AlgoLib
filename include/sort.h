#pragma once
#include <utility>

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
			std::swap(arr[i], arr[minIndex]);
		}
	}
}
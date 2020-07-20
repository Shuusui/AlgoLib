#pragma once

enum class ESortMethod
{
	Ascending, 
	Descending
};

namespace AlgoLib
{
	template <typename T>
	static void SelectionSort(T _arr[], const size_t& _size, const ESortMethod& _method)
	{
		for (size_t i = 0; i < _size; ++i)
		{
			size_t minIndex = i;
			for (size_t j = i + 1; j < _size; ++j)
			{
				bool bMatchMethod = _method == ESortMethod::Ascending ? _arr[minIndex] > _arr[j] : _arr[minIndex] < _arr[j];
				if (!bMatchMethod)
				{
					continue;
				}
				minIndex = j;
			}
			T tempElement = std::move(_arr[i]);
			_arr[i] = _arr[minIndex];
			_arr[minIndex] = tempElement;
		}
	}

	template <typename T>
	static void SelectionSort(T _arr[], const size_t& _size, bool (*_predicate)(T a, T b))
	{
		for (size_t i = 0; i < _size; ++i)
		{
			size_t minIndex = i;
			for (size_t j = i + 1; j < _size; ++j)
			{
				if (!_predicate(_arr[minIndex], _arr[j]))
				{
					continue;
				}
				minIndex = j;
			}
			T tempElement = std::move(_arr[i]);
			_arr[i] = _arr[minIndex];
			_arr[minIndex] = tempElement;
		}
	}

	template <typename T>
	static void SelectionSort(T _arr[], const size_t& _size, bool (*_predicate)(const T& a, const T& b))
	{
		for (size_t i = 0; i < _size; ++i)
		{
			size_t minIndex = i;
			for (size_t j = i + 1; j < _size; ++j)
			{
				if (!_predicate(_arr[minIndex], _arr[j]))
				{
					continue;
				}
				minIndex = j;
			}
			T tempElement = std::move(_arr[i]);
			_arr[i] = _arr[minIndex];
			_arr[minIndex] = tempElement;
		}
	}

	template <typename T>
	static void SelectionSort(T _arr[], const size_t& _size, bool (*_predicate)(T& a, T& b))
	{
		for (size_t i = 0; i < _size; ++i)
		{
			size_t minIndex = i;
			for (size_t j = i + 1; j < _size; ++j)
			{
				if (!_predicate(_arr[minIndex], _arr[j]))
				{
					continue;
				}
				minIndex = j;
			}
			T tempElement = std::move(_arr[i]);
			_arr[i] = _arr[minIndex];
			_arr[minIndex] = tempElement;
		}
	}

	template <typename T>
	static void BubbleSort(T _arr[], const size_t& _size, const ESortMethod& _method)
	{
		bool bIsSorted = false;
		while (!bIsSorted)
		{
			bool bHadToGetModified = false;
			for (size_t i = 1; i < _size; ++i)
			{
				bool bMatchMethod = _method == ESortMethod::Ascending ? _arr[i - 1] > _arr[i] : _arr[i - 1] < _arr[i];
				if (!bMatchMethod)
				{
					continue;
				}
				T tempElement = std::move(_arr[i]);
				_arr[i] = _arr[i-1];
				_arr[i-1] = tempElement;
				bHadToGetModified = true;
			}
			if (!bHadToGetModified)
			{
				bIsSorted = true;
			}
		}
	}

	template <typename T>
	static void BubbleSort(T _arr[], const size_t& _size, bool(*_predicate)(T a, T b))
	{
		bool bIsSorted = false;
		while (!bIsSorted)
		{
			bool bHadToGetModified = false;
			for (size_t i = 1; i < _size; ++i)
			{
				if (!_predicate(_arr[i-1], _arr[i]))
				{
					continue;
				}
				T tempElement = std::move(_arr[i]);
				_arr[i] = _arr[i - 1];
				_arr[i - 1] = tempElement;
				bHadToGetModified = true;
			}
			if (!bHadToGetModified)
			{
				bIsSorted = true;
			}
		}
	}

	template <typename T>
	static void BubbleSort(T _arr[], const size_t& _size, bool(*_predicate)(const T& a, const T& b))
	{
		bool bIsSorted = false;
		while (!bIsSorted)
		{
			bool bHadToGetModified = false;
			for (size_t i = 1; i < _size; ++i)
			{
				if (!_predicate(_arr[i - 1], _arr[i]))
				{
					continue;
				}
				T tempElement = std::move(_arr[i]);
				_arr[i] = _arr[i - 1];
				_arr[i - 1] = tempElement;
				bHadToGetModified = true;
			}
			if (!bHadToGetModified)
			{
				bIsSorted = true;
			}
		}
	}

	template <typename T>
	static void BubbleSort(T _arr[], const size_t& _size, bool(*_predicate)(T& a, T& b))
	{
		bool bIsSorted = false;
		while (!bIsSorted)
		{
			bool bHadToGetModified = false;
			for (size_t i = 1; i < _size; ++i)
			{
				if (!_predicate(_arr[i - 1], _arr[i]))
				{
					continue;
				}
				T tempElement = std::move(_arr[i]);
				_arr[i] = _arr[i - 1];
				_arr[i - 1] = tempElement;
				bHadToGetModified = true;
			}
			if (!bHadToGetModified)
			{
				bIsSorted = true;
			}
		}
	}

	template <typename T>
	static void InsertionSort(T _arr[], const size_t& _size, const ESortMethod& _method)
	{
		for (size_t i = 1; i < _size; ++i)
		{
			for (size_t j = 0; j < i; ++j)
			{
				/*if (_arr[i] (_method == ESortMethod::Ascending) > _arr[j] : <)
				{
					continue;
				}
				for (size_t k = j; k < i; ++k)
				{

				}*/
			}
		}
	}
}
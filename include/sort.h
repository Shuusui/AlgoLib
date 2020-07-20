#pragma once



namespace AlgoLib
{
	enum class ESortMethod
	{
		Ascending,
		Descending
	};

	template <typename T>
	static void SelectionSort(T _arr[], const size_t& _size, const ESortMethod& _method)
	{
		for (size_t i = 0; i < _size; ++i)
		{
			size_t minIndex = i;
			for (size_t j = i + 1; j < _size; ++j)
			{
				if (!(_method == ESortMethod::Ascending) ? _arr[minIndex] > _arr[j] : _arr[minIndex] < _arr[j])
				{
					continue;
				}
				minIndex = j;
			}
			T tempElement = std::move(_arr[i]);
			_arr[i] = std::move(_arr[minIndex]);
			_arr[minIndex] = std::move(tempElement);
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
			_arr[i] = std::move(_arr[minIndex]);
			_arr[minIndex] = std::move(tempElement);
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
			_arr[i] = std::move(_arr[minIndex]);
			_arr[minIndex] = std::move(tempElement);
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
			_arr[i] = std::move(_arr[minIndex]);
			_arr[minIndex] = std::move(tempElement);
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
				if (!(_method == ESortMethod::Ascending) ? _arr[i - 1] > _arr[i] : _arr[i - 1] < _arr[i])
				{
					continue;
				}
				T tempElement = std::move(_arr[i]);
				_arr[i] = std::move(_arr[i-1]);
				_arr[i-1] = std::move(tempElement);
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
				_arr[i] = std::move(_arr[i - 1]);
				_arr[i - 1] = std::move(tempElement);
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
				_arr[i] = std::move(_arr[i - 1]);
				_arr[i - 1] = std::move(tempElement);
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
				_arr[i] = std::move(_arr[i - 1]);
				_arr[i - 1] = std::move(tempElement);
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
				if (!(_method == ESortMethod::Ascending) ? _arr[j] > _arr[i] : _arr[j] < _arr[i])
				{
					continue;
				}
				
				T elementToInsert = std::move(_arr[i]);
				T tempElement = std::move(_arr[j + 1]);
				_arr[j + 1] = std::move(_arr[j]);
				for (size_t k = j + 1; k < i; ++k)
				{
					T nextTemp = std::move(_arr[k + 1]);
					 _arr[k + 1] = std::move(tempElement);
					 tempElement = std::move(nextTemp);
				}
				_arr[j] = std::move(elementToInsert);
			}
		}
	}

	template <typename T>
	static void InsertionSort(T _arr[], const size_t& _size, bool(*_predicate)(T a, T b))
	{
		for (size_t i = 1; i < _size; ++i)
		{
			for (size_t j = 0; j < i; ++j)
			{
				if (!_predicate(_arr[j], _arr[i]))
				{
					continue;
				}

				T elementToInsert = std::move(_arr[i]);
				T tempElement = std::move(_arr[j + 1]);
				_arr[j + 1] = std::move(_arr[j]);
				for (size_t k = j + 1; k < i; ++k)
				{
					T nextTemp = std::move(_arr[k + 1]);
					_arr[k + 1] = std::move(tempElement);
					tempElement = std::move(nextTemp);
				}
				_arr[j] = std::move(elementToInsert);
			}
		}
	}

	template <typename T>
	static void InsertionSort(T _arr[], const size_t& _size, bool(*_predicate)(const T& a, const T& b))
	{
		for (size_t i = 1; i < _size; ++i)
		{
			for (size_t j = 0; j < i; ++j)
			{
				if (!_predicate(_arr[j], _arr[i]))
				{
					continue;
				}

				T elementToInsert = std::move(_arr[i]);
				T tempElement = std::move(_arr[j + 1]);
				_arr[j + 1] = std::move(_arr[j]);
				for (size_t k = j + 1; k < i; ++k)
				{
					T nextTemp = std::move(_arr[k + 1]);
					_arr[k + 1] = std::move(tempElement);
					tempElement = std::move(nextTemp);
				}
				_arr[j] = std::move(elementToInsert);
			}
		}
	}

	template <typename T>
	static void InsertionSort(T _arr[], const size_t& _size, bool(*_predicate)(T& a, T& b))
	{
		for (size_t i = 1; i < _size; ++i)
		{
			for (size_t j = 0; j < i; ++j)
			{
				if (!_predicate(_arr[j], _arr[i]))
				{
					continue;
				}

				T elementToInsert = std::move(_arr[i]);
				T tempElement = std::move(_arr[j + 1]);
				_arr[j + 1] = std::move(_arr[j]);
				for (size_t k = j + 1; k < i; ++k)
				{
					T nextTemp = std::move(_arr[k + 1]);
					_arr[k + 1] = std::move(tempElement);
					tempElement = std::move(nextTemp);
				}
				_arr[j] = std::move(elementToInsert);
			}
		}
	}
}
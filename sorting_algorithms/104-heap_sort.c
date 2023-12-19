#include "sort.h"

/**
 * heapify - builds a heap from a given array
 * @arr: array to be sorted
 * @size: size of array
 * @full_size: size of the full array
 * @i: index of the root node
 */
void heapify(int *arr, size_t size, size_t full_size, size_t i)
{
	size_t largest = i, left = 2 * i + 1, right = 2 * i + 2;
	int temp;

	if (left < size && arr[left] > arr[largest])
		largest = left;
	if (right < size && arr[right] > arr[largest])
		largest = right;
	if (largest != i)
	{
		temp = arr[i];
		arr[i] = arr[largest];
		arr[largest] = temp;
		print_array(arr, full_size);
		heapify(arr, size, full_size, largest);
	}
}

/**
 * heap_sort - sorts an array of integers in ascending order using the
 * Heap sort algorithm
 * @array: array to be sorted
 * @size: size of array
 */
void heap_sort(int *array, size_t size)
{
	int i;

	if (!array || size == 0)
		return;
	for (i = size / 2 - 1; i >= 0; i--)
		heapify(array, size, size, i);
	for (i = size - 1; i > 0; i--)
	{
		int temp = array[0];

		array[0] = array[i];
		array[i] = temp;
		print_array(array, size);
		heapify(array, i, size, 0);
	}
}

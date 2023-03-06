#include <algorithm>

int find(int*, int, int);

int main()
{
	const int size = 10;
	int array[size] = { 4,5,9,1,2,7,8,3,2,1 };
	int index = find(array, size, 7);
	index = find(array, size, 7);
	index = find(array, size, 7);
	index = find(array, size, 7);
	index = find(array, size, 7);
	index = find(array, size, 7);
}

int find(int* array, int size, int key)
{
	for (int i = 0; i < size; i++)
	{
		if (array[i] == key)
		{
			if (i != 0)
			{
				std::swap(array[i], array[i - 1]);
			}
			return i;
		}
	}
	return -1;
}
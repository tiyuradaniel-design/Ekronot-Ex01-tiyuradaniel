#include <iostream>

void reverse(int* nums, unsigned int size) 
{
	int* temp = new int[size];
	for (int i = 0; i < size; ++i) 
	{
		temp[i] = nums[i];
	}
	for (int i = 0; i < size; ++i) 
	{
		nums[i] = temp[size - 1 - i];
	}
	delete[] temp;
}

int* reverse10()
{
	int* nums = new int[10];
	for (int i = 0; i < 10; ++i)
	{
		cout << "\nenter value for element: " << endl;
		cin >> nums[i];
	}
	reverse(nums, 10);
	return nums;
}
#include <iostream>
#include<ctime>
#include<cstdlib>
#include<algorithm>

void showArr(int arr[],const int length)
{
	for (int i = 0; i < length; i++)
	{
	std::cout << arr[i]<<", ";
	}
	std::cout << "\b\b.\n\n";
}
int searchIndex(int arr[], const int length, int n, int begin = 0)
{
	
	for (int i = begin; i < length; i++)
	{
		if (arr[i] == n)
			return i;
	}
}
int searchLastIndex(int arr[], const int length, int n, int begin = 0)
{
	for (int i = length - 1; i >= begin; i--)
	{
		if (arr[i] == n)
			return i;
	}

}
int maxElement(int arr[], const int length)
{
	int max = arr[0];
	
	for (int i = 0; i < length; i++)
	{
	 max = arr[i] > max ? arr[i] : max;
	}
	return max;
}
int minElement(int arr[], const int length)
{
	int min = arr[0];
	for (int i = 0; i < length; i++) 
	{
	min = arr[i] < min ? arr[i] : min;
	}
	return min;
}
int meanValue(int arr[], const int length)
{
	int sum = 0;
	
	for (int i = 0; i < length; i++)
	{
		sum += arr[i];
	}
	return sum/2;
}
void range(int arr[], const int length, int beg_r, int end_r)
{
	for (int i = 0 ; i < length; i++)
	{ 
		if(arr[i] > beg_r && arr[i] < end_r )
		std::cout << arr[i] << ", ";
	}
	std::cout << "\b.\n\n";
}
void range_index(int arr[], const int length, int beg_r, int end_r)
{
	for (int i = beg_r; i < end_r; i++)
	{
		std::cout << arr[i] << ", ";
	}
	std::cout << "\b.\n\n";
}
int counter(int arr[], const int length, int n)
{
	int counter = 0;
	for (int i = 0; i < length; i++)
	{
		if (arr[i] == n)
		counter++;
	}
	
	return counter;
}

int main()
{
	const int size = 100;
	int arr[size];
	int a = -100, b = 100;
	srand(time(NULL));
	for (int i = 0; i < size; i++)
		arr[i] = rand() % (b + 1 - a) + a;
	
	showArr(arr, size);
	std::cout << searchIndex(arr, size, 56) << ". \n\n";
	std::cout << searchLastIndex(arr, size, -100) << ". \n\n";
	std::cout << maxElement(arr, size) << ". \n\n";
	std::cout << minElement(arr, size) << ". \n\n";
	std::cout << meanValue(arr, size) << ". \n\n";
	range(arr, size,-10,10);
	range_index(arr, size, 1, 10);
	std::cout <<"Counter number = " << counter(arr, size, -12) << ". \n\n";
	
	return 0;
}
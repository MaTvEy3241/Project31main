#include <iostream>

using namespace std;

bool check_the_same_elements(int* vector,int size) {
	for (int i = 0; i < size - 1; i++)
	{
		if (vector[i] != vector[i + 1])
		{
			return false;
		}
	}
	return true;


}

int count_odd_elements(int* array,int length) {
	int count = 0;
	for (int i = 0; i < length; i++)
	{
		if (array[i] % 2 != 0)
		{
			count++;
		}
	}
	return count; 

}


int count_positive_elements(int* array, int length) {
	int count = 0;
	for (int i = 0; i < length; i++)
	{
		if (array[i] > 0) {
			count++;
		}
	}
	return count;

}

int count_ziro_elements(int* array, int length) {
	int count = 0;
	for (int i = 0; i < length; i++)
	{
		if (array[i] == 0) {
			count++;
		}
	}
	return count;

}
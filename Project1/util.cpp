#include <iostream>
#include <string>

using namespace std;

void init(int* vector,int size,int min, int max) {
	for (int i = 0; i < size; i++)
	{
		vector[i] = rand() % (max - min + 1) + min;		
	}	
}

string convert_to_string(int* vector,int size)
{
	string s = "";

	for (int i = size - 1; i >= 0; i--)
	{
		s = s + to_string(vector[i]) + " ";
	}
	return s;
}


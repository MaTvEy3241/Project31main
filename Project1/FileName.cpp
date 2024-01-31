#include <iostream>

using namespace std;
void init(int* vector, int size, int min, int max);
string convert_to_string(int* vector, int size);
bool check_the_same_elements(int* vector, int size);
int count_odd_elements(int* array, int length);
int count_ziro_elements(int* array, int length);
int count_positive_elements(int* array, int length);



int main() {
	const int size = 10;	
	//int array[size];

	int array[] = { 1,2,3,4,5,6,7,8,9,10};

	//init(array, size, -5, 5);
	cout << convert_to_string(array,size) << endl;
	
	bool result = check_the_same_elements(array, size);
	cout << (result ? "yes" : "no");

	cout << "\nCount of odd elements : " << count_odd_elements(array,size) << endl;

	cout << "\nCount of Positive elements: " << count_positive_elements(array,size) << "\nCount of zero elements: " << count_ziro_elements(array,size) << endl;


	return 0;
}
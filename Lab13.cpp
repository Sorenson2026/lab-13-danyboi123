//This program sorts a vector with a bubbles sort
//Daniel Parker 04/14/2026
#include <iostream>
#include <vector>
#include <iomanip>
#include <ctime>
using namespace std;

//function declarations
void fillVector(vector<int>& numbers);
void bubbleSort(vector<int>&);
void swap(int &num1, int &num2);

//main integer, drive program for vector sorting and display
int main()
{

	//greeting
	cout << "This program demonstrates a bubble sort on a integer vector!" << endl << endl;
	//create vector
	vector<int> numbers(25);
	//fill the vector
	fillVector(numbers);
	//sort vector while outputting
	bubbleSort(numbers);

	return 0;
}

//function fill vector with random numbers
void fillVector(vector<int>& numbers)
{
	srand(time(0));
	//make pointer
	//int *point = 0;

	for (int i = 0; i < 25; i++)
	{
		numbers[i] = rand() % 100;
	}
}

//function bubble sort the data in vector
void bubbleSort(vector<int>& numbers)
{
	//make index counters
	int i, c;
	//output original vector numbers
	cout << "Original: ";
	for (i = 0; i < 25; i++)
		cout << setw(4) << numbers[i];
	cout << endl;

	//loop for outputing each pass
	for (c = 0; c < 24; c++)
	{
		bool bIsSorted = true;

		//one sorting pass
		for (i = 0; i < 24; i++)
		{
			if (numbers[i + 1] < numbers[i])
			{
				swap(numbers[i + 1], numbers[i]);
				bIsSorted = false;
			}
		}

		if (bIsSorted)
		{
			cout << "List is sorted!" << endl;
			return;
		}
		//output the pass
		cout << "Pass #" << setw(2) << left << c + 1 << ":   ";
		for (i = 0; i < 25; i++)
			cout << setw(4) << numbers[i];
		cout << endl;
	}
}

//function swap two numbers
void swap(int &num1, int &num2)
{
	//create temporary variable
	int temp;
	//proform swap
	temp = num1;
	num1 = num2;
	num2 = temp;
}
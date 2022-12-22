#include <iostream>
#include <ctime>
#include "searchSortAlgorithms.h"
#include "stdafx.h"

using namespace std;
// Code for array size and function protoypes for test program
	//setup size of array
const int SIZE = 50000;

void fill(int list[], int size);
void copyList(int list[], int temp[], int length);
int main()
{//2.create two arrays one for backup and one for sort 
	int intlist[SIZE];
	int temp[SIZE];
	//a. Setup four timers for sorts ex. clock_t startTime1, endTime1 2, 3, 4
	clock_t startTime1, endTime1;
	clock_t startTime2, endTime2;
	clock_t startTime3, endTime3;
	clock_t startTime4, endTime4;
	//b. Call fill(intlist, SIZE)
	fill(intlist, SIZE);

	//3.Quick sort: The pivot is the middle element
	//Call copyList(intlist, temp, SIZE);
	copyList(intlist, temp, SIZE);
	// Get startTime1 = clock()
	startTime1 = clock();
	// Call quicksort passing list and size get end time endTime1 = clock()
	quickSort(intlist, SIZE); // quickSort function call
	endTime1 = clock(); // endTime1 

	//4.Quick sort: The pivot is the median element
	// call to copyList
	copyList(temp, intlist, SIZE);
	// startTime2 
	startTime2 = clock();
	//	call to quickSortMedianPivot
	quickSortMedianPivot(intlist, SIZE);
	// endTime2 = clock();
	endTime2 = clock();

	//5.Quick sort with insertion sort 
	//The pivot is the middle element
	copyList(temp, intlist, SIZE);
	startTime3 = clock();
	// call of quickSortWithInsertionSort
	quickSortWithInsertionSort(intlist, SIZE);
	endTime3 = clock();

	//6.Quick sort with insertion sort 
	//The pivot is the median element
	copyList(temp, intlist, SIZE);
	startTime4 = clock();
	// call to quickSortMedianWithInsertionSort(intlist, SIZE);	
	quickSortMedianWithInsertionSort(intlist, SIZE);
	endTime4 = clock();

	//7.Output four message with time for the four sorts called
	// output with endtime - start time for "Quick sort time, with pivot middle element: "
	cout << "Quick sort time, with pivot middle element: " << endTime1 - startTime1 << endl;
	// output with endtime - start time for "Quick sort time, with pivot median element: "
	cout << "Quick sort time, with pivot median element: " << endTime2 - startTime2 << endl;
	// output with endtime - start time for "Quick sort and insertion sort time, with pivot middle element"
	cout << "Quick sort and insertion sort time, with pivot " << "middle element:" << endTime3 - startTime3 << endl;
	// output with endtime - start time for "Quick sort and insertion sort time, with pivot median element:" 
	cout << "Quick sort and insertion sort time, with pivot " << "median element:" << endTime4 - startTime4 << endl;

	char pause;
	cout << "Enter Q to Quit: ";
	cin >> pause;
	return 0; // end of main
}
	//8.Code a function to fill array using an algorithm
	void fill(int list[], int size) {
		int seed = 47;
		int multiplier = 2743;
		int addOn = 5923;
		int index = 0;
		while (index < size) {
			list[index++] = seed;
			seed = int(seed * multiplier + addOn);
		}
	}
	//9.Code a function to copy list
	void copyList(int list[], int temp[], int length) {
		for (int i = 0; i < length; i++) {
			temp[i] = list[i];
		}
	}




/*
 * Driver.cpp
 *  Created on: Feb 18, 2013
 *      Author: kamilla
 */


#include <iostream>
#include <fstream>
#include <cassert>
#include <string>
#include "ArrayUtilities.h"
#include "SearchUtilities.h"

using namespace std;

int main()
{
	const int ARRAYSIZE=20;

	int actualSize;
	string fileName;
	string info;

	int a[ARRAYSIZE];
	cout << "Enter the input file name ";
	cin  >> fileName;
	ifstream inData;
	ofstream outData;
	inData.open(fileName.c_str());
	outData.open("out.txt");
	int searchItem;
	inData>>info;
	inData>>searchItem;
	fillArray  (inData,  a, ARRAYSIZE,actualSize);
	cout   <<"Search in array\n";
	outData<<"Search in array\n";
    outputArray(outData, a, actualSize, info);
	outputArray(cout,    a, actualSize, info);
	//sequential search
	int position;
	position=seqSearch(a,actualSize,searchItem);
	if (position >= 0)
		{
			cout    << "Sequential Search: SearchItem "
					<< searchItem
					<< " is on position "
					<< position
					<< "\n";
			outData << "Sequential Search: SearchItem "
					<< searchItem
					<< " is on position "
					<< position
					<< "\n";
		}
		else
		{
			cout    << "Sequential Search: SearchItem "
					<< searchItem
					<< " is not in the list\n";
			outData << "Sequential Search: SearchItem "
					<< searchItem
					<< " is not in the list\n";
		}
    //change input file also
	position = -1;
	position=recBin(a, actualSize, searchItem, position);
	if (position >= 0)
		{
			cout    << "Recursive Sequential Search: SearchItem "
					<< searchItem
					<< " is on position "
					<< position
					<< "\n";
			outData << "Recursive Sequential Search: SearchItem "
					<< searchItem
					<< " is on position "
					<< position
					<< "\n";
		}
		else
		{
			cout    << "Recursive Sequential Search: SearchItem "
					<< searchItem
					<< " is not in the list\n";
			outData << "Recursive Sequential Search: SearchItem "
					<< searchItem
					<< " is not in the list\n";
		}
	//BinarySearch
	//int binarySearch(const int list[], int listLength, int searchItem);
	inData>>info;
	inData>>searchItem;
	fillArray  (inData,  a, ARRAYSIZE,actualSize);

	cout    << "Array before binary search\n";
	outData << "Array before binary search\n";
	outputArray(outData, a, actualSize, info);
	outputArray(cout,    a, actualSize, info);
	position=binarySearch(a,actualSize,searchItem);
	if (position >= 0)
	{
		cout    << "Binary Search: SearchItem "
				<< searchItem
				<< " is on position "
				<< position
				<< "\n";
		outData << "Binary Search: SearchItem "
				<< searchItem
				<< " is on position "
				<< position
				<< "\n";
	}
	else
	{
		cout    << "Binary Search: SearchItem "
				<< searchItem
				<< " is not in the list\n";
		outData << "Binary Search: SearchItem "
				<< searchItem
				<< " is not in the list\n";
	}
	//ToDo Recursive Binary Search  : change input file also
	inData.close();
	outData.close();

	//Submit updated program in separate zipped folder.
}

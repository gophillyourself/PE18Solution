/*
 * SearchUtilities.h
 *
 *  Created on: Apr16, 2015
 *      Author: kamilla
 */

#ifndef SEARCHUTILITIES_H_
#define SEARCHUTILITIES_H_

//SequentialSearch
int seqSearch(const int list[], int listLength, int searchItem);
// Recursive Sequential Search ToDo

//BinarySearch
int binarySearch(const int list[], int listLength, int searchItem);

int recBin(const int list[], int listLength, int searchItem, int loc);
// Recursive Binary Search ToDo
#endif /* SEARCHUTILITIES_H_ */

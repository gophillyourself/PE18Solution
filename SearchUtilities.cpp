/*
 * SearchUtilities.cpp
 *
 *  Created on: Mar 10, 2013
 *      Author: kamilla
 */


int seqSearch(const int list[], int listLength, int searchItem)
{
	int loc;
	bool found = false;
	for (loc = 0; loc <listLength; ++loc)
	{
		if (list[loc]==searchItem)
		{
			found = true;
			break;
		}
	}
	if (found)
	{
		return loc;
	}
	else
	{
		return -1;
	}
}
//TODO recursive sequential search

//BinarySearch
int binarySearch(const int list[], int listLength, int searchItem)
{
	sort(list, listLength);
	
	return -1;
}
int recSeq(const int list[], int listLength, int searchItem, int loc)
{
	bool found = false;
	loc++;
	if(loc == listLength)
		return -1;
	if(list[loc]==searchItem)
		found = true;
	if(!found)
	{
		recbin(list[], listLength, searchItem, loc);
	}
	else
		return loc;
}
//TODO recursive binary search

void sort(int list[], int listLength)
{
	double temp;
	bool sorted = true;
	for(int i = 0;!sorted; i++)
	{
		if(i + 1 == listLength)
		{
			for(int j = 0; j - 1< listLength;j++)
			{
				if(list[j]>list[j+1])
				{
					sorted=false;
					break;
				}
				else
					sorted = true;
			}
			if(sorted)
				break;
			i = 0;
		}
		if(list[i]>list[i+1])
		{
			temp = list[i];
			list[i] = list[i+1];
			list[i+1]=temp;
		}
	}
}

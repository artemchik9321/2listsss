// 2listsss.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "List.h"
using namespace std;

bool func(int value) 
{
	return value > 5;
}

bool func1(int value) 
{
	return value < 5;
}

int main()
{
	List list;
	list.push_back(10);
	list.push_back(12);
	list.push_back(13);
	List list2;
	list2.push_back(1);
	list2.push_back(2);
	list2.push_back(3);
	List list3 = list + list2;
	list3.show();
}
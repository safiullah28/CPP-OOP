#include "header.h"
#include <iostream>
using namespace std;

void getMinimumnumber(const int a[], int size)
{
	int min;

	for (int i = 0; i < size; i++)
	{
		if (i == 0)
			min = a[i];

		if (a[i] < min)
			min = a[i];

	}
	cout << "Mnimum number  : " << min << endl;
}

void getMaximumnumber(const int a[], int size)
{
	int max;

	for (int i = 0; i < size; i++)
	{
		if (i == 0)
			max = a[i];

		if (a[i] > max)
			max = a[i];

	}

	cout << "Maximum number  : " << max << endl;
}

void countOddEvenNumbers(const int a[], int size)
{
	int counte = 0, counto = 0;

	for (int i = 0; i < size; i++)
	{
		if (a[i] % 2 == 0)
			counte++;
	}

	counto = size - counte;

	cout << "Count of Odd numbers : " << counto << endl;
	cout << "Count of Even numbers : " << counte << endl;
}

void getAverageofData(const int a[], int size)
{
	float avg = 0.0;

	for (int i = 0; i < size; i++)
	{
		avg = avg + a[i];
	}

	avg = avg / size;

	cout << "The average of numbers is : " << avg << endl;
}

void getSumofData(const int a[], int size)
{
	int sum = 0;

	for (int i = 0; i < size; i++)
	{
		sum = sum + a[i];
	}
	cout << "The sum of data is : " << sum << endl;
}

void printOriginalData(const int a[], int size)
{
	cout << "The original data is ";

	for (int i = 0; i < size; i++)
	{
		if (i % 10 == 0)
			cout << endl;

		cout << a[i] << "\t";
	}
	cout << endl;
}


void printMenu(const int a[], int size)
{
	cout << "--------Data Operations menu-------" << endl;
	cout << "0. Display Original Data" << endl;
	cout << "1. Get Minimum Number" << endl;
	cout << "2. Get Maximum Number" << endl;
	cout << "3. Get Sum of Data" << endl;
	cout << "4. Get Average of Data" << endl;
	cout << "5. Count Odd/Even numbers" << endl;
	cout << "6. Exit" << endl;
	cout << "---------------------------------" << endl;

	int choice = 0;

	do {
		cout << "Enter your choice (0-6) ";
		cin >> choice;
		switch (choice) {

		case 0:
			printOriginalData(a, size);
			break;

		case 1:
			getMinimumnumber(a, size);
			break;

		case 2:
			getMaximumnumber(a, size);
			break;

		case 3:
			getSumofData(a, size);
			break;

		case 4:
			getAverageofData(a, size);
			break;

		case 5:
			countOddEvenNumbers(a, size);
			break;

		default:
			cout << "Invalid choice. Please enter a number between 0 and 6." << endl;

		}

	} while (choice != 6);

	cout << "Exiting the Program. GoodBye!";
}
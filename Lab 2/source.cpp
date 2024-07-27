#include<iostream>
#include<fstream>
#include<string>
#include "header.h"
using namespace std;

int main()
{
	int arr[100];
	ifstream file("input.txt");
	if (file.is_open())
	{
		int num,i=0;
		
		while (file >> num)
		{
			arr[i] = num;
			i++;
		}

		cout << "==> Data reading from input.txt completed <==" << endl;

	}
	else {

		cerr << "Unable to open the file ";

	}

	printMenu(arr, 100);

	return 0;
}
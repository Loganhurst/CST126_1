// CST126_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
//char* FLOAT(char* ltr );

int main()
{
	//cout << "What is your phrase?" << endl;
	const char *phr = "I was born with a plastic spoon in my mouth.";
	//phr=new char[256];
	//cin >> phr;
	//FIND(phr);
	int c=1;
	//char* cpy;
	//cpy = new char;
	//*cpy = *phr;

	while (c != 0)
	{
		cout << "What letter are you looking for?" << endl;
		char * ltr = nullptr;
		ltr = new char;
		cin >> ltr;
		//cout << ltr;
		int pos = 0;
		int notf = 0;

		while (notf != 1)
		{
			if (*ltr == *phr)
			{
				cout << ltr << " found at: " << pos + 1 << endl;
				notf = 1;
			}
			//*cpy++;
			*phr++;
			//cout << *phr << endl;
			pos++;			
			//ltr++;
		}
		while (pos > 0)
		{
			*phr--;
			pos--;
		}

		if (notf != 1)
		{
			cout << "No " << ltr << "s found" << endl;
			return -1;
		}
		
		if (phr == nullptr)
		{
			cout << "Invalid Prompt, please enter new phase." << endl;
			return 0;
		}
		cout << "Do you want to continue?" << endl << "1 = Yes, 0 = No" << endl;
		cin >> c;

		delete ltr;
	}
	//delete[] phr;

	//   "I was born with a plastic spoon in my mouth."
	return 0;
}


// prg1006-w01-pointers-vs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string greeting = "G'Day!\n";
    cout << greeting << &greeting << endl;

	string* greetingPointer = &greeting;

	cout << greetingPointer << endl;

	greetingPointer++;

	cout << greetingPointer << endl;
	cout << sizeof(greetingPointer) << endl;

	return 0;
}


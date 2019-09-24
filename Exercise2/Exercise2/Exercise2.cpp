// Exercise2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../../std_lib_facilities.h"

int main()
{
	cout << "Enter your first name:";
	string first_name;
	cin >> first_name;
	cout << "Enter your last name:";
	string last_name;
	cin >> last_name;
	cout << "Enter your age:";
	int age = 0;
	cin >> age;
	cout << "Enter your confidence in Programmers (in percentage 0-100%):";
	double confidence;
	cin >> confidence;
	double percentage = confidence / 100;

	int dog_year = age * 7;

	cout << "Hello, " << first_name << " " << last_name << ", nice to meet you!\n";
	cout << "You might be " << age << " in human years, but in dog years you are " << dog_year << ".\n";
	if (percentage <= 0.5)
		cout << "I agree, programmers can't be trusted!";
	if (percentage > 0.5)
		cout << "Writing good code takes hard work!";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

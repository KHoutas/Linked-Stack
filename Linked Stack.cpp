// Linked Stack.cpp : Defines the entry point for the console application.

// Linked implementation of a Stack program that demonstrates the abstract data type in full, going through all of the functions proper.
// Template classes are used to allow for the most diversity in the program.

#include "stdafx.h"
#include "Stack.h"
#include "Stack.cpp"
#include <string>
#include <ctime>
#include <iostream>
using namespace std;

int main()
{
	srand(time(NULL));

	Stack<int> intStack;
	
	cout << "Linked implementation of a stack test using template classes." << endl;
	
	cout << "\nIntegers" << endl;
	cout << "--------" << endl;
	
	cout << "Checks if stack is empty first" << endl;
	
	if (intStack.isEmpty())
	{
		cout << "Empty!" << endl;
	}
	else
	{
		cout << "Not Empty!" << endl;
	}
	
	cout << "\nPushing 100 random numbers from 1 - 500 into the stack." << endl;
	
	for (int i = 0; i < 100; i++)
	{
		intStack.push(rand() % 499 + 1);
	}
	
	cout << "\nChecking the size of the stack." << endl;
	cout << intStack.getSize() << endl;
	
	cout << "\nPeeking the top of the stack." << endl;
	cout << intStack.peek() << endl;
	
	cout << "\nPopping off the 1st 20 numbers." << endl;
	
	for (int i = 0; i < 20; i++)
	{
		cout << intStack.pop() << " ";
	}
	
	cout << "\n\nChecking the size of the stack once more." << endl;
	cout << intStack.getSize() << endl;
	
	cout << "\nFinally checking if stack is still empty." << endl;
	
	if (intStack.isEmpty())
	{
		cout << "Empty" << endl;
	}
	else
	{
		cout << "Not empty" << endl;
	}
	
	Stack<string> stringStack;

	cout << "\n\nStrings" << endl;
	cout << "-------" << endl;

	cout << "\nChecks if stack is empty first" << endl;
	
	if (stringStack.isEmpty())
	{
		cout << "Empty" << endl;
	}
	else
	{
		cout << "Not empty" << endl;
	}

	cout << "\nPushing in 100 elements into the stack" << endl;
	
	string string;

	for (int i = 1; i < 101; i++)
	{
		string = "String ";

		string.append(to_string(i));

		stringStack.push(string);
	}

	cout << "\nChecking the size of the stack." << endl;
	cout << stringStack.getSize() << endl;

	cout << "\nPeeking the top of the stack." << endl;
	cout << stringStack.peek() << endl;

	cout << "Popping the first 5 items off of the stack." << endl;

	for (int i = 0; i < 5; i++)
	{
		cout << stringStack.pop() << endl;
	}

	cout << "\n\nChecking the size of the stack once more." << endl;
	cout << stringStack.getSize() << endl;

	cout << "\nFinally checking if stack is still empty." << endl;

	if (stringStack.isEmpty())
	{
		cout << "Empty" << endl;
	}
	else
	{
		cout << "Not empty" << endl;
	}

    return 0;
}


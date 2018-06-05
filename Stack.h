#pragma once

// Stack class that handles all of the stack information through nodes (linked implementation)

template <class ItemType>		// Using template classes to allow for diverse data types
class Stack
{
private:

	// Node class that worries about data and linking to the next node
	class Node
	{
	private:

		ItemType data;			// Holds the data of whatever data type we input
		Node* next;				// Holds the location of the next node in this stack, which we are pointing to.

	public:

		Node(ItemType, Node*);	//Constructor for the class, allows to initialize data and next node.
		ItemType getData();		// Gets the data information
		Node* getNext();		// Gets the location of the next node

	};

	Node* base;					// The location to our base node, the top of the stack
	int size;					// The amount of items we currently have in the stack.

public:

	Stack();					// Default constructor for the stack
	void push(ItemType);		// Function that pushes items onto the stack
	ItemType pop();				// Function that pops items off of the stack
	ItemType peek();			// Function that takes a look at the item on the top of the stack
	bool isEmpty();				// Function that checks if the stack is empty
	int getSize();				// Function that returns the amount of items on the stack


};
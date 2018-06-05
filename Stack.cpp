#include "stdafx.h"
#include "Stack.h"

// Node constructor
template <class ItemType>
Stack<ItemType>::Node::Node(ItemType data, Node* next)
{
	this->data = data;	// Sets "data" data member as the data we retrieve from where the object is initialized
	this->next = next;	// Sets "next" data member as the location of the next node in the stack
}

// Function to get the data
template <class ItemType>
ItemType Stack<ItemType>::Node::getData()
{
	return data;	// Returns the data
}

// Function to get the location of the next node
template <class ItemType>
typename Stack<ItemType>::Node* Stack<ItemType>::Node::getNext()
{
	return next;	// Returns the variable "next"
}

// Stack default constructor
template <class ItemType>
Stack<ItemType>::Stack()
{
	base = nullptr;	// Sets base data type to nullptr, because when initializing the stack at first there ARE no nodes/items.
	size = 0;		// Sets the size to 0 because there are no nodes/items.
}

// Function to push an item onto the stack
template <class ItemType>
void Stack<ItemType>::push(ItemType item)
{
	base = new Node(item, base);	// Creates a dynamic object that gets the value of item and the current base and then sets base to point to that in memory.
	size++;							// Increments size
}

// Function to pop an item off the stack
template <class ItemType>
ItemType Stack<ItemType>::pop()
{
	ItemType value = ItemType();	// Create a variable value to store the value of the item we are popping off. In this case, we set it to the default of whatever item type we use.

	if (base != nullptr)			// If there is nothing in the stack, do NOT do this
	{
		value = base->getData();	// Set value equal to the data member in the base node.

		Node* deleter = base;		// Create a new temporary mode and set that to point to the location of the base node.

		base = base->getNext();		// Set base to point to the location of the next node in the stack.

		delete deleter;				// Delete the node at the current location deleter is pointing to

		size--;						// Decrement size by one
	}

	return value;					// Return the value stored in value
}

// Function to check the first value at the top of the stack
template <class ItemType>
ItemType Stack<ItemType>::peek()
{
	return base->getData();	// Goes to the base node and gets the data stored in there. The base node is always the top of the stack.
}

// Function to get the size of the stack (amount of items/elements)
template <class ItemType>
int Stack<ItemType>::getSize()
{
	return size;	// Returns the size data member
}

// Function to check if the stack is currently empty
template <class ItemType>
bool Stack<ItemType>::isEmpty()
{
	if (size == 0)	// If the size is equal to 0
	{
		return true;	// Return true, the stack is empty
	}
	
	return false;	// If it's not, return false
}

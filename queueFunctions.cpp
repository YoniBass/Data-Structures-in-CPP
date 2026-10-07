#pragma once
#include <iostream>
#include "queueFunctions.h"

// adds new element to the queue, if there is room, updating the back index accordingly.
// if the queue is full, the function returns 0, else it returns 1.
bool enqueue(int queue[], int queueCapacity, int & front, int & back, int valueToAdd)
{
	if (isFull(front, back, queueCapacity) == true)
	{
		std::cout << "ERROR, cannot add to queue that is full.\n\a";
		// enqueue failed
		return false;
	}

	if (isEmpty(front, back) == true)
	{
		front = 0;
		back = 0;
	}
	else
	{
		back++;
		// makes sure that the queue loops (same as back %= queueCapacity)
		if (back == queueCapacity)
		{
			back = 0;
		}
	}
	
	queue[back] = valueToAdd;

	// enqueue was successful
	return true;
}

// removes the front element from the queue, moving the front forward by 1 (First In First Out)
// returns true is successful, false if unsuccessful (i.e. list is already empty so there are no elements to be removed)
// todo: change this function to return the dequeued element
bool dequeue(int queue[], int queueCapacity, int & front, int & back, bool & isQueueEmpty)
{
	// Ensure that not trying to remove an element from an empty queue
	if (isEmpty(front, back) == true)
	{
		std::cout << "ERROR, cannot remove items from an empty queue.\n\a";
		return false;
	}

	// Save dequeued element to return
	int dequeuedElement = queue[front];

	//checks if there is just one element bofore the said element is removed, causing the list to become empty
	if (front == back)
	{
		isQueueEmpty = true;
		front = -1;
		back = -1;
	}
	else // queue will not be empty after dequeueing (todo check spelling of this word)
	{
		front++;
	}

	// dequque successful
	return true;

	//return dequeuedElement;
}

// checks if the queue is empty
bool isEmpty(int front, int back)
{
	if (front == -1 && back == -1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

// checks if the queue is full
bool isFull(int front, int back, int queueCapacity)
{
	if (back == front - 1 || (front == 0 && back == queueCapacity - 1))
	{
		return true;
	}
	else
	{
		return false;
	}
}

// gets the front element of the queue
//todo: figure out return value for if the queue is empty
int getFront(int front, int back, int queue[])
{
	//checks that the queue is empty
	if (isEmpty(front, back) == true)
	{
		std::cout << "ERROR, cannot recieve values from an empty queue.\n\a";
		//todo: change the return value to something other than -1
		return -1;
	}
	
	return queue[front];
}

// gets the back element of the queue (last element added)
//todo: figure out return value for if the queue is empty
int getBack(int front, int back, int queue[])
{
	//checks that the queue is empty
	if (isEmpty(front, back) == true)
	{
		std::cout << "ERROR, cannot recieve values from an empty queue.\n\a";
		//todo: change the return value to something other than -1
		return -1;
	}

	return queue[back];
}
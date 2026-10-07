#pragma once

// adds new element to the queue, if there is room, updating the back index accordingly.
// if the queue is full, the function returns 0, else it returns 1.
bool enqueue(int queue[], int queueCapacity, int & front, int & back, int valueToAdd);

// removes the front element from the queue, moving the front forward by 1 (First In First Out)
// returns true is successful, false if unsuccessful (i.e. list is already empty so there are no elements to be removed)
// todo: change this function to return the dequeued element
bool dequeue(int queue[], int queueCapacity, int & front, int & back, bool & isQueueEmpty);

// checks if the queue is empty
bool isEmpty(int front, int back);

// checks if the queue is full
bool isFull(int front, int back, int queueCapacity);

// gets the front element of the queue
//todo: figure out return value for if the queue is empty
int getFront(int front, int queue[]);

// gets the back element of the queue (last element added)
//todo: figure out return value for if the queue is empty
int getBack(int front, int back, int queue[]);
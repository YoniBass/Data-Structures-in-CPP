// Goal: to implement a queue data structure (First In First Out) using a static array (with no explicit pointers)

#include <iostream>
#include "queueFunctions.h"


// The main() creates the variables needed and then tests enqueuing and dequeuing etc, printing the queue at various stages in order to display its contents
int main()
{
	int queue[10] = {};
	int queueCapacity = sizeof(queue) / sizeof(queue[0]);
	int front = -1;
	int back = -1;
	bool isQueueEmpty = true;
	bool isQueueFull = false;
	bool wasDequeueSuccess;

	enqueue(queue, queueCapacity, front, back, 17);
	enqueue(queue, queueCapacity, front, back, 25);
	enqueue(queue, queueCapacity, front, back, 3);
	enqueue(queue, queueCapacity, front, back, 19);

	// Prints the entire queue
	if (front <= back) // straight-forward queue
	{
		for(int i = front; i <= back; ++i)
		{
			std::cout << queue[i] << ", ";
		}
	}
	else // cyclic queue, in two parts: from 'front' to the end of the array, followed by the start of the array up to 'back'
	{
		for (int i = front; i < queueCapacity; ++i)
		{
			std::cout << queue[i] << ", ";
		}

		for (int i = 0; i <= back; ++i)
		{
			std::cout << queue[i] << ", ";
		}
	}
	std::cout << std::endl;

	wasDequeueSuccess = dequeue(queue, queueCapacity, front, back, isQueueEmpty);
	wasDequeueSuccess = dequeue(queue, queueCapacity, front, back, isQueueEmpty);

	// Prints the entire queue
	if (front <= back) // straight-forward queue
	{
		for (int i = front; i <= back; ++i)
		{
			std::cout << queue[i] << ", ";
		}
	}
	else // cyclic queue, in two parts: from 'front' to the end of the array, followed by the start of the array up to 'back'
	{
		for (int i = front; i < queueCapacity; ++i)
		{
			std::cout << queue[i] << ", ";
		}

		for (int i = 0; i <= back; ++i)
		{
			std::cout << queue[i] << ", ";
		}
	}
	std::cout << std::endl;

	enqueue(queue, queueCapacity, front, back, 15);
	enqueue(queue, queueCapacity, front, back, 4);
	enqueue(queue, queueCapacity, front, back, 8);
	enqueue(queue, queueCapacity, front, back, 9);

	// Prints the entire queue
	if (front <= back) // straight-forward queue
	{
		for (int i = front; i <= back; ++i)
		{
			std::cout << queue[i] << ", ";
		}
	}
	else // cyclic queue, in two parts: from 'front' to the end of the array, followed by the start of the array up to 'back'
	{
		for (int i = front; i < queueCapacity; ++i)
		{
			std::cout << queue[i] << ", ";
		}

		for (int i = 0; i <= back; ++i)
		{
			std::cout << queue[i] << ", ";
		}
	}
	std::cout << std::endl;

	wasDequeueSuccess = dequeue(queue, queueCapacity, front, back, isQueueEmpty);

	// Prints the entire queue
	if (front <= back) // straight-forward queue
	{
		for (int i = front; i <= back; ++i)
		{
			std::cout << queue[i] << ", ";
		}
	}
	else // cyclic queue, in two parts: from 'front' to the end of the array, followed by the start of the array up to 'back'
	{
		for (int i = front; i < queueCapacity; ++i)
		{
			std::cout << queue[i] << ", ";
		}

		for (int i = 0; i <= back; ++i)
		{
			std::cout << queue[i] << ", ";
		}
	}
	std::cout << std::endl;

	enqueue(queue, queueCapacity, front, back, 35);
	enqueue(queue, queueCapacity, front, back, 79);
	enqueue(queue, queueCapacity, front, back, 66);
	enqueue(queue, queueCapacity, front, back, 89);
	enqueue(queue, queueCapacity, front, back, 91);

	// Prints the entire queue
	if (front <= back) // straight-forward queue
	{
		for (int i = front; i <= back; ++i)
		{
			std::cout << queue[i] << ", ";
		}
	}
	else // cyclic queue, in two parts: from 'front' to the end of the array, followed by the start of the array up to 'back'
	{
		for (int i = front; i < queueCapacity; ++i)
		{
			std::cout << queue[i] << ", ";
		}

		for (int i = 0; i <= back; ++i)
		{
			std::cout << queue[i] << ", ";
		}
	}
	std::cout << std::endl;

	wasDequeueSuccess = dequeue(queue, queueCapacity, front, back, isQueueEmpty);
	wasDequeueSuccess = dequeue(queue, queueCapacity, front, back, isQueueEmpty);
	wasDequeueSuccess = dequeue(queue, queueCapacity, front, back, isQueueEmpty);
	wasDequeueSuccess = dequeue(queue, queueCapacity, front, back, isQueueEmpty);
	wasDequeueSuccess = dequeue(queue, queueCapacity, front, back, isQueueEmpty);
	wasDequeueSuccess = dequeue(queue, queueCapacity, front, back, isQueueEmpty);

	// Prints the entire queue
	if (front <= back) // straight-forward queue
	{
		for (int i = front; i <= back; ++i)
		{
			std::cout << queue[i] << ", ";
		}
	}
	else // cyclic queue, in two parts: from 'front' to the end of the array, followed by the start of the array up to 'back'
	{
		for (int i = front; i < queueCapacity; ++i)
		{
			std::cout << queue[i] << ", ";
		}

		for (int i = 0; i <= back; ++i)
		{
			std::cout << queue[i] << ", ";
		}
	}
	std::cout << std::endl;

	enqueue(queue, queueCapacity, front, back, 91);
	enqueue(queue, queueCapacity, front, back, 93);
	enqueue(queue, queueCapacity, front, back, 95);
	enqueue(queue, queueCapacity, front, back, 98);

	// Prints the entire queue
	if (front <= back) // straight-forward queue
	{
		for (int i = front; i <= back; ++i)
		{
			std::cout << queue[i] << ", ";
		}
	}
	else // cyclic queue, in two parts: from 'front' to the end of the array, followed by the start of the array up to 'back'
	{
		for (int i = front; i < queueCapacity; ++i)
		{
			std::cout << queue[i] << ", ";
		}

		for (int i = 0; i <= back; ++i)
		{
			std::cout << queue[i] << ", ";
		}
	}
	std::cout << std::endl;

	return 0;
}
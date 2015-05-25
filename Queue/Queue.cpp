#include "Queue.h"

queue::queue()
	: front_of_queue(nullptr), back_of_queue(nullptr)
{

}

queue::~queue(){
	node*	deleter = front_of_queue;
	
	while(deleter != nullptr){
		front_of_queue = front_of_queue->next;

		delete deleter;

		deleter = front_of_queue;
	}

	if(back_of_queue  != nullptr){
		delete back_of_queue;
	}
}

void queue::enqueue(int input){
	node*	enqueue_node = new node;
	enqueue_node->value = input;

	if(front_of_queue == nullptr){
		front_of_queue = enqueue_node;
		back_of_queue = front_of_queue;
		return;
	}

	back_of_queue->next = enqueue_node;

	back_of_queue = back_of_queue->next;

	//back_of_queue->next = nullptr;
}

int queue::dequeue(){
	node*	dequeue_node = front_of_queue;
	int	return_int = dequeue_node->value;

	front_of_queue = front_of_queue->next;

	delete dequeue_node;
	return return_int;
}

#include <iostream>
#include <stdlib.h>
#include <time.h>

#include "Queue.h"

using namespace std;

const int QUEUE_MAX = 10;

int gen_rand();

int main(void){
	srand(time(NULL));
	
	queue*	new_queue = new queue();

	cout << "Input: ";
	for(int i = 0; i < QUEUE_MAX; i++){
		int rand_num = gen_rand();
		new_queue->enqueue(rand_num);
		cout << rand_num << " -> ";
	}
	cout << "Added to queue." << endl;

	cout << "Output: ";
	for(int i = 0; i < QUEUE_MAX; i++){
		int dequeued_int = new_queue->dequeue();
		cout << dequeued_int << " <- ";
	}
	cout << "End of queue reached." << endl;
}

int gen_rand(){
	return (rand()%100)+1;
}

#include <iostream>
#include <stdlib.h>
#include <time.h>

#include "Stack.h"

using namespace std;

const int STACK_MAX = 10;

int gen_rand();

int main(void){
	srand(time(NULL));
	
	stack*	new_stack = new stack();

	for(int i = 0; i < STACK_MAX; i++){
		int rand_num = gen_rand();
		new_stack->push(rand_num);
		cout << rand_num << " -> ";
	}
	cout << "Pushed to stack." << endl;

	for(int i = 0; i < STACK_MAX; i++){
		int pop_int = new_stack->pop();
		cout << pop_int << " <- ";
	}
	cout << "Bottom of stack reached." << endl;
}

int gen_rand(){
	return (rand()%100)+1;
}

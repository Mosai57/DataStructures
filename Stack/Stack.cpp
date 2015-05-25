#include "Stack.h"

stack::stack()
	: top_of_stack(nullptr)
{

}

stack::stack(int input){
	top_of_stack = new node();
	top_of_stack->value = input;
	top_of_stack->next = nullptr;
}

stack::~stack(){
	node*	deleter = top_of_stack;

	while(deleter != nullptr){
		top_of_stack = top_of_stack->next;
		delete deleter;
		deleter = top_of_stack;
	}
}

void stack::push(int input){
	node*	pusher = new node;
	pusher->value = input;

	pusher->next = top_of_stack;
	top_of_stack = pusher;
}

int stack::pop(){
	node*	deleter = top_of_stack;
	int	return_int = deleter->value;

	top_of_stack = top_of_stack->next;

	delete deleter;
	return return_int;
}

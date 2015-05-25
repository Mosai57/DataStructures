#ifndef STACK_H
#define STACK_H

class stack
{

public:
	stack();
	stack(int);
	virtual ~stack();

	void push(int);
	int  pop();

private:
	struct node
	{
		int	value;
		node*	next;
	};

	node*	top_of_stack;
};

#endif

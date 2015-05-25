#ifndef QUEUE_H
#define QUEUE_H

class queue
{

public:
	queue();
	virtual ~queue();

	void enqueue(int);
	int dequeue();

private:
	struct node
	{
		int	value;
		node*	next;
	};
	node*	front_of_queue;
	node*	back_of_queue;
};

#endif

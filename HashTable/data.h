#ifndef DATA_H
#define DATA_H

class data
{
	data();
	data(data&);
	~data();

	void	get_word(char*);
	void	get_value(int);

	char*	word;
	int	value;
}

#endif

#ifndef DATA_H
#define DATA_H

/*
	Data class will not hold any pointers
	to other nodes.  All members of the data
	class will be public, to act as a struct.
*/
class data
{
public:
	data();
	data(data&);
	~data();

	// Accessors
	char*	get_word();
	int	get_value();

	// Mutators
	void	set_word(char*);
	void    set_value(int);

	// Data variables
	char*	word;
	int	value;
}

#endif

#ifndef TABLE_H
#define TABLE_H

class table
{
public:
	table();
	~table();

	void	add(data&);
	void 	rem(char*);
	void	search(char*);

	void	display();
	void	monitor();
	
private:
	data** 	table;

	int	count[TABLE_SIZE];


}



#endif

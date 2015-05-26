#include "data.h"
#include <string.h>

/*
	Default Constructor.
	Initializes a blank data object.
*/
data::data(){
	this->word = nullptr;
	this->int  = NULL;
}

/*
	Copy Constructor.
	Creates a copy of the data object
	passed to it.
*/
data::data(data& data_in){
	if(&data_in != this){
		this->set_word(data_in.get_word());
		this->set_value(data_in.get_value());
	}
	return *this;
}

data::~data(){
	delete this->word;
}

char* data::get_word(){
	return this->word;
}

int data::get_value(){
	return this->value;
}

void data::set_word(char* input){
	int	len = strlen(input);

	this->word = new char[len + 1];
	strcpy(input, word);
}

void data::set_value(int input){
	this->value = input;
}

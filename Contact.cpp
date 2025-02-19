#include "Contact.hpp"

// default constructor used to initialize the values of the class's variables
Contact::Contact()			
{
	name = "";
	number = 0;
}

void Contact::setName(std::string newName)
{
	name = newName;
}

void Contact::setNumber(int newNumber)
{
	number = newNumber;
}

std::string Contact::getName()
{
	return (name);
}
	
int Contact::getNumber()
{
	return (number);
}
#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
	public:
		Contact();							// Constructor declaration
		void setName(std::string newName);	// function prototypes
		void setNumber(int newNumber);
		std::string getName();
		int getNumber();

	private:
		std::string name;
		int number;
};

#endif
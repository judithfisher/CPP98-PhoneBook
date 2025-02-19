#include "PhoneBook.hpp"

Phonebook::Phonebook()
{
	index = 0;
}
// should set the name and contact at the index
// replace oldest contact if phonebook is full
void Phonebook::addContact(std::string name, int number)
{
	Contacts[index].setName(name);
	Contacts[index].setNumber(number);
	index++;
	if (index > 8)
	{
		index = 0;
		std::cout << "Phonebook has only 8 data entries available. Oldest contact will be replaced" << std::endl;
	}
}

void Phonebook::displayContacts()
{
	bool empty = false; 
	for (int i = 0; i < 8; i++)
	{
		if (!Contacts[i].getName().empty())
		{
			std::cout << i + 1 << ". " << Contacts[i].getName()
			<< " - " << Contacts[i].getNumber() << std::endl;
		empty = false;
		}
	}
	if (empty)
		std::cout << "No contacts to display." << std::endl;
}

// breaks after name was found the first time
void Phonebook::searchContacts(std::string name)
{
	bool found = false;
	for (unsigned int i = 0; i < 8; i++)
	{
		if (Contacts[i].getName() == name)
		{
			found = true;
			std::cout << name << "'s phone number is: " << Contacts[i].getNumber() << std::endl;
			break;
		}
	}
	if (!found)
	std::cout << name << " not found in your PhoneBook" << std::endl;
}

// breaks after name was found the first time
void Phonebook::deleteContacts(std::string name)
{
	bool found = false;
	for (unsigned int i = 0; i < 8; i++)
	{
		if (Contacts[i].getName() == name)
		{
			found = true;
			Contacts[i].setName("");
			Contacts[i].setNumber(0);
			std::cout << name << "deleted successfully" << std::endl;
			break;
		}
	}
	if (!found)
		std::cout << name << "not found in your PhoneBook" << std::endl;
}



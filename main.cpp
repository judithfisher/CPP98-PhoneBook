// write a Phonebook
// implement two classes: PhoneBook and Contact

// Class phonebook has an array of contacts
// can store max. 8 contacts; 
// if we add a 9th contact, replace the oldest one by the new one 

#include "Contact.hpp"
#include "PhoneBook.hpp"

// std::string trim(std::string command)
// {
// 	unsigned int start = 0; 
// 	while (start < command.length() && std::isspace(command[start]))
// 		start++;
// 	int end = command.length();
// 	std::string trimmed = command.substr(start, end - start);
// 	return (trimmed);
// }

std::string uppercase(std::string command)
{
	for (unsigned int i = 0; i < command.length(); i++)
		command[i] = std::toupper(command[i]);
	return (command);
}

// trim function not needed, std::cin trims by itself
int main()
{
	int 		number;
	std::string	command;
	std::string	name;
	Phonebook	Phonebook;					// create an instance of class Phonebook

	std::cout << "Welcome to your Phonebook." << std::endl;
	while (1)
	{
		
		std::cout <<  "Enter a command: ADD, SEARCH, DISPLAY ALL, DELETE, EXIT: ";
		std::cin >> command;
		command = uppercase(command);
		if (command == "ADD")
		{
			std::cout << "Contact Name: ";
			std::cin >> name;
			std::cout << "Phone Number: ";
			std::cin >> number;
			name[0] = std::toupper(name[0]);
			Phonebook.addContact(name, number);		// add contact to phonebook
		}
		else if (command == "SEARCH")
		{
			std::cout << "Contact Name: ";
			std::cin >> name;
			name[0] = std::toupper(name[0]);
			Phonebook.searchContacts(name);
		}
		else if (command == "DELETE")
		{
			std::cout << "Contact Name: ";
			std::cin >> name;
			Phonebook.deleteContacts(name);
		}
		else if (command == "DISPLAY ALL")
		{
			Phonebook.displayContacts();
		}
		else if (command == "EXIT")
		{
			std::cout << "Exiting PhoneBook. Good bye!" << std::endl;
			break ;
		}
		else
			std::cout << "Command not found. Please try again!" <<std::endl;
	}
}
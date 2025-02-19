#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

# include "Contact.hpp"

class Phonebook
{
	public:
		Phonebook();											// Constructor declaration
		void addContact(std::string name, int number);			// function to add a contact
		void displayContacts();									// function to display a contact
		void searchContacts(std::string name);					// function to search a contact
		void deleteContacts(std::string name);					// function to delete a contact

	private:
		Contact Contacts[8];
		int index;
};

#endif
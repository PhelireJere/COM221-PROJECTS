#include <iostream>
#include <fstream>
#include <string>

class Contact {
private:
    std::string name;
    std::string lastName;
    std::string phoneNumber;

public:
    Contact() : name(""), lastName(""), phoneNumber("") {}
    Contact(const std::string& name, const std::string& lastName, const std::string& phoneNumber)
        : name(name), lastName(lastName), phoneNumber(phoneNumber) {}

    std::string getName() const {
        return name;
    }

    std::string getLastName() const {
        return lastName;
    }

    std::string getPhoneNumber() const {
        return phoneNumber;
    }
};

class PhoneBook {
private:
    Contact* contacts;
    int size;
    int count;

    void addContact(const Contact& contact) {
        if (count < size) {
            contacts[count] = contact;
            count++;
            std::cout << "Contact added successfully.\n";
        } else {
            std::cout << "Phonebook is full. Cannot add more contacts.\n";
        }
    }

    void savedContactsToFile() {
        std::ofstream file("contacts.txt");
        if (file.is_open()) {
            for (int i = 0; i < count; ++i) {
                file << contacts[i].getName() << " " << contacts[i].getLastName() << " " << contacts[i].getPhoneNumber() << std::endl;
            }
            file.close();
            std::cout << "Contacts saved to file.\n";
        } else {
            std::cout << "Unable to open file.\n";
        }
    }

    void showAllContacts() {
        std::cout << "All contacts:\n";
        for (int i = 0; i < count; ++i) {
            std::cout << "Name: " << contacts[i].getName() << std::endl;
            std::cout << "Last Name: " << contacts[i].getLastName() << std::endl;
            std::cout << "Phone Number: " << contacts[i].getPhoneNumber() << std::endl;
            std::cout << "-----------------------\n";
        }
    }

public:
    PhoneBook() : size(5), count(0) {
        contacts = new Contact[size];
    }

    ~PhoneBook() {
        delete[] contacts;
    }

    void run() {
        char choice;
        do {
            std::cout << "Phone Book Menu:\n";
            std::cout << "1. Add Contact\n";
            std::cout << "2. Save Contacts to File\n";
            std::cout << "3. Show All Contacts\n";
            std::cout << "4. Exit\n";
            std::cout << "Enter your choice: ";
            std::cin >> choice;

            switch (choice) {
                case '1': {
                    std::string name, lastName, phoneNumber;
                    std::cout << "Enter Name: ";
                    std::cin >> name;
                    std::cout << "Enter Last Name: ";
                    std::cin >> lastName;
                    std::cout << "Enter Phone Number: ";
                    std::cin >> phoneNumber;
                    Contact newContact(name, lastName, phoneNumber);
                    addContact(newContact);
                    break;
                }
                case '2':
                    savedContactsToFile();
                    break;
                case '3':
                    showAllContacts();
                    break;
                case '4':
                    std::cout << "Exiting...\n";
                    break;
                default:
                    std::cout << "Invalid choice. Please try again.\n";
            }
        } while (choice != '4');
    }
};

int main() {
    PhoneBook phoneBook;
    phoneBook.run();

    return 0;
}

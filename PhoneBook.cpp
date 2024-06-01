#include <iostream>
#include <fstream>
#include <string>

class Contact {
 private:
    std::string firstName;
    std::string lastName;
    std::string phoneNumber;

 public:
    Contact() : firstName(""), lastName(""), phoneNumber("") {}
    Contact(const std::string& firstName, const std::string& lastName, const std::string& phoneNumber)
        : firstName(firstName), lastName(lastName), phoneNumber(phoneNumber) {}

    std::string getFirstName() const {
        return firstName;
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
            std::cout << "Contact added successfully." << std::endl;
        } 
        else {
            std::cout << "Phonebook is full. Cannot add more contacts." << std::endl;
        }
    }

    void savedContactsToFile() {
        std::ofstream file("contacts.txt");
        if (file.is_open()) {
            for (int i = 0; i < count; ++i) {
                file << contacts[i].getFirstName() << " " << contacts[i].getLastName() << " " << contacts[i].getPhoneNumber() << std::endl;
            }
            file.close();
            std::cout << "Contacts saved to file." << std::endl;
        } 
        else {
            std::cout << "Unable to open file." << std::endl;
        }
    }

    void showAllContacts() {
        std::cout << "All contacts:" << std::endl;
        for (int i = 0; i < count; ++i) {
            std::cout << "Name: " << contacts[i].getFirstName() << std::endl;
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
            std::cout << "Options "<< std::endl;
            std::cout << "1- Add a contact." << std::endl;
            std::cout << "2- Show all contacts." << std::endl;
            std::cout << "3- Save contacts to file." << std::endl;
            std::cout << "4- Quit." << std::endl;
            std::cout << "What would you like to do? ";
            std::cin >> choice;

            switch (choice) {
                case '1': {
                    std::string firstName, lastName, phoneNumber;
                    std::cout << "Enter Name: ";
                    std::cin >> firstName;
                    std::cout << "Enter Last Name: ";
                    std::cin >> lastName;
                    std::cout << "Enter Phone Number: ";
                    std::cin >> phoneNumber;
                    Contact newContact(firstName, lastName, phoneNumber);
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
                    std::cout << "Quiting..." << std::endl;
                    break;
                default:
                    std::cout << "Invalid choice. Please try again." << std::endl;
            }
        } while (choice != '4');
    }
};
int main() {
    PhoneBook phoneBook;
    phoneBook.run();

    return 0;
}

#include <iostream>
#include <string>

class Contact {
private:
    std::string name;
    std::string lastName;
    std::string phoneNumber;

public:
    // Default constructor
    Contact() : name(""), lastName(""), phoneNumber("") {}

    // Overloaded constructor
    Contact(const std::string& name, const std::string& lastName, const std::string& phoneNumber)
        : name(name), lastName(lastName), phoneNumber(phoneNumber) {}

    // Accessor methods
    std::string getName() const {
        return name;
    }

    std::string getLastName() const {
        return lastName;
    }

    std::string getPhoneNumber() const {
        return phoneNumber;
    }

    bool operator==(const Contact& other) const {
        return phoneNumber == other.phoneNumber;
    }
};

int main() {
    
    Contact contact1; 
    Contact contact2("John", "Doe", "1234567890"); // Overloaded constructor

    std::cout << "\nContact 2 details:\n";
    std::cout << "Name: " << contact2.getName() << std::endl;
    std::cout << "Last Name: " << contact2.getLastName() << std::endl;
    std::cout << "Phone Number: " << contact2.getPhoneNumber() << std::endl;

    if (contact1 == contact2) {
        std::cout << "\nBoth contacts have the same phone number.\n";
    } else {
        std::cout << "\nContacts have different phone numbers.\n";
    }

    return 0;
}

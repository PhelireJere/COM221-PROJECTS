#include <iostream>
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

    bool operator==(const Contact& other) const {
        return phoneNumber == other.phoneNumber;
    }
};

int main() {

    Contact contact1; 
    Contact contact2("Phelire", "Jere", "0984260969"); 
    
    std::cout << "Contact 1 details:" << std::endl;
    std::cout << " First Name: " << contact1.getFirstName() << std::endl;
    std::cout << "Last Name: " << contact1.getLastName() << std::endl;
    std::cout << "Phone Number: " << contact1.getPhoneNumber() << std::endl;

    std::cout << "Contact 2 details:" << std::endl;
    std::cout << "First Name: " << contact2.getFirstName() << std::endl;
    std::cout << "Last Name: " << contact2.getLastName() << std::endl;
    std::cout << "Phone Number: " << contact2.getPhoneNumber() << std::endl;

    
    if (contact1 == contact2) {
        std::cout << "Both contacts have the same phone number.";
    } else {
        std::cout << "Contacts have different phone numbers.";
    }

    return 0;
}

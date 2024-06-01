#include <iostream>
#include <string>

class Contact{
 private:
   std::string firstName;
   std::string lastName;
   std::string phoneNumber;

 public:
  Contact(): firstName(s: " "), lastName(s: " "), phoneNumber(s: " "){}

  Contact(const std::string& firstName,const std::string& lastName,const std::string& phoneNumber)
     :firstName(firstName), lastName(lastName), phoneNumber(phoneNumber){}

     std::string getfirstName () const{
         return firstName;
     }

     std::string getLastName () const{
        return lastName;
     }

     std::string getphoneNumber () const{
        return phoneNumber;
     }

     bool operator==(const Contact &other) const{
        return phoneNumber == other.phoneNumber;
     }
};

int main(){

    Contact contact1;
    Contact contact2(firstName: "Phelire", lastName: "Jere", phoneNumber: "0984260969");

    std::cout << "Contact 1 details:\n";
    std::cout << "Name: " << contact1.getfirstName() << std::endl;
    std::cout << "Last Name: " << contact1.getlastName() << std::endl;
    std::cout << "Phone Number: " << contact1.getphoneNumber() << std::endl;

    if (contact1 == contact2) {
        std::cout << "\nBoth contacts have the same phone number.\n";
    } else {
        std::cout << "\nContacts have different phone numbers.\n";
    }

    return 0;
}
    



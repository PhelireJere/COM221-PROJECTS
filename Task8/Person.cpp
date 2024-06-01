#include "Person.h"

Person::Person(){
    mWeight = 0.0f;
    mFirstName = "";
    mAge = 0;
}

Person::Person(float newWeight){
    mWeight = newWeight;
}

Person::~Person(){

}

float Person::operator+(const Person& otherPerson){
    return mWeight + otherPerson.mWeight;
}
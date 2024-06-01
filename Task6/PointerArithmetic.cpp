#include <iostream>
using namespace std;

int main(){

    //null pointer
    int* pPointer = nullptr;

    int numbersArray[3] = {10, 20, 30};

    //assign address of the first element to the pointer
    pPointer = numbersArray;

    //output the address of the first element to pointer
    cout << "Address at pPointer: " << pPointer << endl;
    cout << "Address of numbersArray[0]: " << numbersArray << endl;

    //output
    cout << "Value at pPointer: " << *pPointer << endl;

    //This outputs
    cout << "Value at ++pPointer: " << *(++pPointer) << endl;

    //assign address
    pPointer = numbersArray;

    //This outputs
    cout << "Value of pPointer++: " << *(pPointer++) << endl;

    return 0;
}
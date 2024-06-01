#include <iostream>
using namespace std;

int main(){ 

    //declare ponter and initialize it
    //so that it doesn't store a random address
    int* pPointer = nullptr;

    int integerVar = 5;

    //assign pointer to address of object
    pPointer = &integerVar;

    //output the value if integerVar
    cout << "integerVar: " << integerVar << endl;

    //output the address of integerVar
    cout << "Address of integerVar: " << &integerVar << endl;

    //output the address assigned to pPointer
    cout << "pPointer: " << pPointer << endl;

    //output the addresss of pPointetr
    cout << "Address of pPointer" << &pPointer << endl;
    
    return 0;
}
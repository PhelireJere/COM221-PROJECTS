#include <iostream>
using namespace std;

int main(){

    int firstValue;
    int secondValue;

    int * pPointer = nullptr;

    //assign pointer with the addresss of the firstValue
    pPointer = &firstValue;
    *pPointer = 10; //Indirection

    //assign pointer with the addre of secondValue
    pPointer = &secondValue;
    *pPointer = 20; //Indirection

    cout << "firdtValue is " << firstValue << '\n';
    cout << "secondValue is " << secondValue << '\n';

    return 0;
}
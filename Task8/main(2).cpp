#include<iostream>
#include "Person.h"
using namespace std;
int main(){
    Person Jane(60.0f);
    Person John(75.0f);

    float totalWeight = Jane + John;

    cout << "Total weight: " << totalWeight << endl;

    return 0;

}
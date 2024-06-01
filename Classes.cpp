#include<iostream>
#include<string>
using namespace std;

class mammals{
    
    protected:
         
         void sound() {

            cout<<"All mammals produce sound"<<endl;
         }

};


class dog: public mammals{

    public: 

    void soundDog() {

        cout<<"Dog barks";
    }

};



int main() {
   

   dog mySecondDog;

    mySecondDog.soundDog();




  return 0;
}


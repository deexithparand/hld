// 3. Inheritance (5 mins)
// What is inheritance?
// Create a base class Animal with a method speak(). Create a derived class Dog that inherits from Animal and overrides the speak() method.
// Question: How can you access base class methods from a derived class?

#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
        string type;
        string gettype(){
            return this->type;
        }
};

class Dog: public Animal{
    public:
        void speak(){
            if(gettype()==""){
                cout<<"Initialize the animal type first";
            } else {
                cout<<gettype()<<" Barks"<<endl;
            }
        }
};

class Bird: public Animal{
    public:
        void speak(){
            if(gettype()==""){
                cout<<"Initialize the animal type first";
            } else {
                cout<<gettype()<<" Chirps"<<endl;
            }
        }
};

int main(){
    Dog d;
    Bird b;
    
    d.type = "Dog";
    b.type = "Bird";
    
    d.speak();
    b.speak();
    return 0;
}
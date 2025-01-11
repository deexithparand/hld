#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
        virtual void speak(){
            cout<<"Animal Speaks";
        }
};

class Dog : public Animal{
    public:
        void speak() override{
            cout<<"Dog barks";
        }
};

int main(){
    Dog d;
    d.speak();
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

// compile-time polymorphism or function overloading
// .. function overloading > > > during the compile-time , based on the parameters the function is decided to execute
class base{
    int isum;
    float fsum;
    
    public:
        base(){
            isum = 0;
            fsum = 0.0f;
        }
        
        ~base(){
            cout<<"Heap memory destroyed for the object : "<<this<<endl;
        }
        
        void add(int a,int b){
            isum = a+b;
        }    
        
        void add(float a, float b){
            fsum = a+b;
        }
        
        void printdata(){
            cout<<"isum : "<<isum<<", fsum : "<<fsum<<endl;
        }
};

int main()
{
    base i, f;
    
    i.add(4,96);
    
    f.add(4.0f, 96.0f);
    
    i.printdata();
    f.printdata();

    return 0;
}
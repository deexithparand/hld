#include<bits/stdc++.h>
using namespace std;

class animal{
    public:
        virtual void speak(){
            cout<<"animal speaks";
        }
        
        virtual ~animal() {  // Virtual destructor to ensure proper cleanup
            cout << "Animal object destroyed" << endl;
        }
};

class dog : public animal{
    public:
        void speak() override{
            cout<<"dog barks"<<endl;
        }
        
        ~dog() override{
            cout<<"dog object destroyed" <<endl;
        }
};

int main(){
    animal *a;
    
    a = new dog();
    
    a->speak();
    
    delete a;
    
    return 0;
}
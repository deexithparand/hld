#include<bits/stdc++.h>
using namespace std;

// class BookStore{
    
// }

class Book{
    // private variables
    string title, author;
    short pages; // 0 - 65,535
    
    public:
    
        // default constructor
        Book(){
            this->title = "";
            this->author = "";
            this->pages = -1;
        }
        
        // parameterized constructor
        Book(string title, string author, short pages){
            this->title = title;
            this->author = author;
            this->pages = pages;
        }

        // destructor
        ~Book(){
            cout<<"Book is getting destroyed by : "<<this->author<<endl;
            // Book is getting destroyed by the author : 
            // Book is getting destroyed by the author : sombulingam
            // Book is getting destroyed by the author : deexith
        }
        
        // member functions
        void PrintDetails(){
            if((pages<0) || (author=="") || (title=="")){
                cout<<"Invalid Book Details, Initialize first"<<endl;
                return; 
            } 
            
            cout<<author<<" wrote the book title "<<title<<" of "<<pages<<" pages"<<endl;
        }
};

int main(){
    Book *b = new Book();
    Book *wb = new Book("system-design", "sombulingam", 60);
    Book b1("HOW TO CLEAR CLEARTRIP","deexith",100);
    
    // "new" keyword -> creates a membory -> initialize -> return pointer to the location
    
    b->PrintDetails();
    wb->PrintDetails();
    
    
    b1.PrintDetails();
    
    delete b;
    delete wb;
    
    // Key Points:
    // b1 is created on the stack, so no need for delete.
    // b and wb are dynamically allocated, so delete is necessary to avoid memory leaks.
    // Everything else looks good! This code should now work correctly and efficiently.
    
    return 0;
}

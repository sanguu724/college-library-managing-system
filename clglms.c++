#include <iostream>
using namespace std;

// Main class
class Library
{
protected:
    string title;   // Store book name

public:
    // Save book name
    void setTitle(string t)
    {
        title = t;
    }

    // Function for show details
    virtual void show() = 0;
};

// Child class
class Book : public Library
{
private:
    int id;   // Book number

public:
    // Constructor
    Book(int i, string t)
    {
        id = i;
        setTitle(t);
    }

    // Print book details
    void show() override
    {
        cout << "Library Book Details" << endl;
        cout << "--------------------" << endl;
        cout << "Book ID   : " << id << endl;
        cout << "Book Name : " << title << endl;
        cout << "Status    : Available" << endl;
    }
};

int main()
{
    // Create object
    Book b1(101, "C++ Programming");

    // Base class pointer
    Library *ptr;

    // Point to object
    ptr = &b1;

    cout << "Welcome to Library" << endl;
    cout << endl;

    // Call function
    ptr->show();

    cout << endl;
    cout << "Thank You" << endl;

    return 0;
}
#include <iostream>
using namespace std;
class students
{
    int id;
    string name;
    int dob;
public :
    // Implicit constructor
    // students() {}

    ///Explicit constructor
    students()
    {
        cout << "constructer called" << endl;
        cout << "Enter the inputs: ";
        cin >> id >> name >> dob;
    }
    void display()
    {
        cout << "Id is : " << id << endl;
        cout << "Name is : " << name << endl;
        cout << "DOB is : " << dob  << endl;
    }
};

int main ()
{
    students s1,s2;
    s1.display();
    s2.display();
    
    return 0;
}
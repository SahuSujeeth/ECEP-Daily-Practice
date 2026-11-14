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
    students(int userid, string username, int userdob)
    {
        cout << "Parameterized1 constructer called" << endl;
        id = userid;
        name = username;
        dob = userdob;
    }
    students(int userid, string username)
    {
        cout << "Parameterized2 constructer called" << endl;
        id = userid;
        name = username;
        dob = 2005;
    }
    void display()
    {
        cout << "Id is : " << id << endl;
        cout << "Name is : " << name << endl;
        cout << "DOB is : " << dob  << endl << endl;
    }
};

int main ()
{
    students s1,s2(200,"Hello",2002 ), s3(300,"Hey"),s4;
    s1.display();
    s2.display();
    s3.display();
    s4.display();
    
    return 0;
}
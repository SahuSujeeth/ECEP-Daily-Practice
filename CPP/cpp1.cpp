#include <iostream>
using namespace std;
class students
{
    int id;
    string name;
    int dob;
public :
    
    students(int id = 0, string name = "default", int dob = 9999)//we cannot take it like this with same name becoz comipler getting confuse
    //it will give garbage value becoz of confusion
    {
        cout << "Parameterized constructer called" << endl;
        id = id;
        name = name;
        dob = dob;
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
    students s1,s2(200,"Hello",2002 ), s3(300,"Hey");
    s1.display();
    s2.display();
    s3.display();
    
    
    return 0;
}
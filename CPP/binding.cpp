//funtion overwriting and function overloading.
#include <iostream>
using namespace std;
class Emertxe
{
    protected :
    int id;
    string name;
    int dob;
    public:

    Emertxe(int id = 0, string name = "None", int dob = 0) : id(id), name(name), dob(dob)
    {
        cout << "Emertxe Constructor called" << endl;
    }
    void display()
    {
        cout << "Id is : " << id << endl
             << "Name is : " << name << endl
             << "dob is : " << dob << endl;
    }
};
class Students : public Emertxe
{
protected:
    int mark;

public:
    Students(int id = 0, string name = "None", int dob = 0, int mark = 0) : Emertxe(id, name, dob), mark(mark)
    {
        cout << "Student Constructor called" << endl;
    }
    // void show_marks()
    // {
    //     cout << "Marks : " << mark << endl;
    // }
    void display()
    {
        cout << "Id is : " << id << endl
             << "Name is : " << name << endl
             << "dob is : " << dob << endl
             << "Marks : " << mark << endl;
    }
};
class Mentors : public Emertxe
{
protected:
    int batch;

public:
    Mentors(int id = 0 ,string name = "None", int dob = 0, int batch = 0) : Emertxe(id, name, dob), batch(batch)
    {
        cout << "menotrs Constructor called" << endl;
    }
    // void show_marks()
    // {
    //     cout << "Marks : " << mark << endl;
    // }
    void display()
    {
        cout << "Id is : " << id << endl
             << "Name is : " << name << endl
             << "dob is : " << dob << endl
             << "batch : " << batch << endl;
    }
};
int main()
{
    // Students *s1 = new Students(100,"sahu",2004,92);
    // s1->display();
    Emertxe *em;
    // em = new Students(100,"sahu",2004,90);
    // em->display();
    // delete em;

    em = new Mentors(200,"sahoo",2003,90);
    em->display();
    delete em;
}
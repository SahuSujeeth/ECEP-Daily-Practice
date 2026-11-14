#include <iostream>
using namespace std;
class students
{
    int id;
    string name;
    int dob;
public :
    /*
        //we cannot take it like this with same name becoz comipler getting confuse
        //it will give garbage value becoz of confusion
        //To avoid this we are using this pointer - we don't have to create this it will automatical create when we create object.
    */
    //Initialise List - Outside bracket object property and Inside bracket parameterised Property 
    students(int id = 0, string name = "default", int dob = 9999) :id(id) , name(name), dob(dob)
   
    {
        cout << "Parameterized constructer called" << endl;
        // this pointer will have address of each object. it automatical create when we create object
        //we cannot do like this compiler get confuse
        /*
        id = id;
        name = name;
        dob = dob;
        
        */
       
       //WITHOUT THIS POINTER - WE CAN WRITE IT AT OUTSIDE THE CONSTRUCTOR INITILISE ONLY
       //LHS - OBJECT PROPERTIES & RHS - PARAMETERISED 
        /*
            this->id = id;
            this->name = name;
            this->dob = dob;
        */
        
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
#include<iostream>
using namespace std;
class Emertxe 
{
    protected:
        int id;
        string name;
        int dob;

    public:
        Emertxe()
        {
            cout << "Emertxe Constructor called" << endl;
        }
        void showProfile()
        {
            cout << "Id : " << id << endl
                 << "Name : " << name << endl
                 << "Dob : " << dob << endl;
        }
        public :
       ~Emertxe()
       {
          cout << "Emertxe Destructor called" << endl;
       }

        
};
class mentors : public Emertxe
{
    protected :
        int noofbatches;
    public :
    mentors()
    {
        cout << "Mentors Constructor called" << endl;
    }
    ~mentors()
    {
        cout << "Mentors Destructor called" << endl;
    }
    

};
class students : public Emertxe
{
    protected:
        int marks;
    public :
    students()
    {
        cout << "students Constructor called" << endl << endl;
    }
    public :
    ~students()
    {
        cout << "Students Destructor called" << endl;
    }
};
int main()
{
    mentors m1;
    students s1;
    // m1.showProfile();
    // s1.showProfile();
}
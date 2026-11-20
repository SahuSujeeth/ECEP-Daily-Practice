#include<iostream>
using namespace std;
class Emertxe 
{
    protected:
        int id;
        string name;
        int dob;

    public:
        Emertxe(int id = 0, string name = "Default", int dob = 0) : id(id),name(name),dob(dob)
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
       
        
};
class mentors : public Emertxe
{
    protected :
        int noofbatches;
    public :
    mentors(int id = 1, string name = "None", int dob = 1, int noofbatches = 1) : Emertxe(id,name,dob),noofbatches(noofbatches)
    {
        cout << "Mentors Constructor called" << endl;
    }
    void showBatches()
    {
        cout << "noofbatches : " << noofbatches << endl << endl;
    }
   
    

};
class students : public Emertxe
{
    protected:
        int marks;
    public :
    students(int id = 1, string name = "None", int dob = 0, int marks = 0): Emertxe(id,name,dob),marks(marks)
    {
        cout << "students Constructor called" << endl << endl;
    }
    void showMarks()
    {
        cout << "Students marks : " << marks << endl;
    }
    
    
};
int main()
{
    mentors m1(101,"Sahu",2004,1);
    students s1(102,"Suzeeth",2005,2);
    m1.showProfile();
    m1.showBatches();
    s1.showProfile();
    s1.showMarks();
}
#include<iostream>
#include<cstdlib>
using namespace std;
class mentors
{
    int id ;
    string name;
    int batches;
public :
    mentors(int id = 3, string name = "None", int batches = 5) : id(id) , name(name),batches(batches)
    {
        cout << "Constructor called" << endl;
    }
    void display()
    {
        cout << "Id : " << id << endl
            << "Name : " << name << endl
            << "Batches : " << batches << endl;
    }
    ~mentors()
    {
        cout << "Destructor called" << endl;
    }
};
#if 0
int main()
{
   mentors *m1 = (mentors*) malloc(sizeof(mentors));
   m1->display();
   free(m1);
}
#endif
int main()
{
    mentors *m1 = new mentors;
    m1->display();
    delete m1;
}
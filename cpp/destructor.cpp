#include<iostream>
using namespace std;

class mentors
{
    int *noofbatches;
    
    public:
    mentors(int batches= 0)
    {
        cout << "Constructor called" << endl;
        noofbatches = new int(batches);
    }
    void display()
    {
        cout << "Batches : " << *noofbatches << endl;
        cout << "Batches Address: " << noofbatches << endl;
    }
    ~mentors()
    {
        cout << "Destructor called " << endl;
        delete noofbatches;
    }
};
int main()
{
    mentors m1(3), m2(4), m3;
    m1.display();
    m2.display();
    m3.display();
    
}
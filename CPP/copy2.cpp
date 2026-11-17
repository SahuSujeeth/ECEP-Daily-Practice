#include<iostream>
using namespace std;
class mentors
{
    int *batches;

    public:
        mentors(int batch = 0)
        {
            cout << "Constructor Called " << endl;
            batches = new int(batch);
        }
        void display()
        {
            cout << "Batches : " << *batches << endl;
        }
        ~mentors()
        {
            cout << "Destructor called " << endl;
            delete batches;
    }
};
int main()
{
    mentors m1(5), m2(m1);
    m1.display();
    m2.display();
}
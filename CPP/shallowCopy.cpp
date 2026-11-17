#include<iostream>
using namespace std;
class Shallowcopy

{
    int *batches;

    public:
        Shallowcopy
        (int batch = 0)
        {
            cout << "Constructor Called " << endl;
            batches = new int(batch);
        }
        Shallowcopy(const Shallowcopy &ref)
        {
            cout << "Copy constructor called " << endl;
            batches = ref.batches;
        }
        void display()
        {
            cout << "Batches : " << *batches << endl;
        }
        ~Shallowcopy
        ()
        {
            cout << "Destructor called " << endl;
            delete batches;
    }
};
int main()
{
    Shallowcopy
     m1(5), m2(m1);
    m1.display();
    m2.display();
}
#include<iostream>
using namespace std;
class deepCopy

{
    int *batches;

    public:
        deepCopy(int batch = 0)
        {
            cout << "Constructor Called " << endl;
            batches = new int(batch);
        }
        deepCopy(const deepCopy &ref)
        {
            cout << "Copy constructor called " << endl;
            batches = new int(*ref.batches);
        }
        void display()
        {
            cout << "Batches : " << *batches << endl;
        }
        ~deepCopy
        ()
        {
            cout << "Destructor called " << endl;
            delete batches;
    }
};
int main()
{
    deepCopy
    m1(5), m2(m1);
    m1.display();
    m2.display();
}
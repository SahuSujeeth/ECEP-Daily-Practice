#include<iostream>
using namespace std;
class mentor
{
    public :
    int id;
    string name;
    int batches;
    //static int num1,num2;// for this memory will allocate at compile time and in data segment
    static int count;

};
class std 
{
    static int count ;
};
int mentor :: count = 0;// this time only memory allocation will happen
int std :: count = 0;// this time only memory allocation will happen

int main()
{
    cout << "Size of mentor : " << sizeof(mentor) << endl;
    //cout << "Size of student : " << sizeof(students) << endl;
    mentor m1,m2;
    m1.count = 1;
    cout << "Count : " << m1.count << endl;
    cout << "Count : " << m2.count << endl;
    m2.count = 2;
    cout << "Count : " << m1.count << endl;
    cout << "Count : " << m2.count << endl;
}
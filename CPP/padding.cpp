#include<iostream>
using namespace std;
class mentor
{
    public :
    int id;
    string name;
    int batches;
    //static int num1,num2;// for this memory will allocate at compile time and in data segment
    static int d;

};
class students : public mentor
{
   string address; 
};
int main()
{
    cout << "Size of mentor : " << sizeof(mentor) << endl;
    //cout << "Size of student : " << sizeof(students) << endl;
    mentor m1;
    m1.d = 2.5;
}
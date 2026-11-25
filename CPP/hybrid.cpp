#include<iostream>
using namespace std;

class A
{
    public : 
        int id;
};
class B : public A
{

};
class C : public A
{

};
class D : public B, public C
{

};
int main()
{
    D obj;
    obj.B :: id = 10;
    obj.C :: id = 15;

    cout << "Obj.B::id = " << obj.B::id << endl;
    cout << "Obj.C::id = " << obj.C::id << endl;
    
    obj.C::id = 20;
    cout << "Obj.B::id = " << obj.B::id << endl;
    cout << "Obj.C::id = " << obj.C::id << endl;
}
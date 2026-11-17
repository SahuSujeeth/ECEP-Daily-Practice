#include<iostream>
using namespace std;

class footBall
{
    string name;
    int goals;
    int jersey;

public:
    footBall(string name = "default", int goals = 0,int jersey = 0) : name(name), goals(goals),jersey(jersey)
    {
        cout << "Constructor called" << endl;
    }
    footBall(footBall &ref)
    {
        cout << "Copy consstructor called" << endl;
        name = ref.name;
        goals = ref.goals;
        jersey = ref.jersey;
    }
    void display()
    {
        cout << "Name : " << name << endl
             << "Goals : " << goals << endl
             << "Jersey : " << jersey << endl << endl;
    }
};
int main()
{
    footBall f1("Messi",934,10),f2("Ronaldo",984,7);
    f1.display();
    f2.display();

    footBall f3(f1);
    footBall f4(f2);
    f3.display();
    f4.display();
}
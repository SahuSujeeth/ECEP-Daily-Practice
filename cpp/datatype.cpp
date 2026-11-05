#include <iostream>
using namespace std;

int main ()
{
    int num = 10;
    char ch = 'A';
    double d = 20.5;
    string name = "Sahu";
    bool statement = true;

    cout << "Num : " << num << endl;
    cout << "Double : "  << d << endl;
    cout << "Character : "  << ch << endl;
    cout << "Name : " << name << endl;
    cout << "Statement : " << statement << endl;

    cout << "All in one line" << endl << endl;
    cout << "Num : " << num << endl 
         << "Double : " << d << endl 
         << "Character : " << ch << endl 
         << "Name : " << name << endl 
         << "Statement : " << statement << endl;
    
    return 0;
}
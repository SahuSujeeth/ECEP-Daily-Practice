#include <iostream>
using namespace std;

int main ()
{
    char ch;
    int num;
    string name;
    double d;
    bool statement;
    

   cout << "Enter the character : ";
   cin >> ch;
   cout << "Enter the num : ";
   cin >> num;
   cout << "Enter the string name : ";
   //cin >> name;
   getline(cin,name);
   cout << "Enter the double : ";
   cin >> d;

    cout << "Character : " << ch << endl 
         << "Num : " << num << endl  
         << "Name : " << name << endl 
         << "Double : " << d << endl;
    return 0;
}
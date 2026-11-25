#include<iostream>
using namespace std;

class Numbers
{
    int num1, num2;
    public :
        Numbers(int num1 = 0, int num2 = 0) : num1(num1), num2(num2)
        {

        }
        void display()
        {
            cout << "Num1 : " << num1 << endl
                 << "Num1 :" << num2 << endl;
        }
        void operator +(int second)
        {
            num1 += second;
            num2 += second;
        }
        void operator -(int second)
        {
            num1 -= second;
            num2 -= second;
        }
    Numbers operator +(Numbers second)
    {
        Numbers temp;
        temp.num1 = num1 + second.num1;
        temp.num2 = num2 + second.num2;
        return temp;
    }
};
int main()
{
    Numbers obj1(5,15);
    cout << "Before the operation : " << endl;
    obj1.display();
    obj1 + 10;
    cout << "After + operation : " << endl;
    obj1.display();
    obj1 - 5;
    cout << "After - operation : " << endl;
    obj1.display();

    Numbers obj2(10,20) , obj3;
    obj3 = obj1 + obj2;
    cout << "After adding the both obj1 and obj2 : " << endl;
    obj3.display();
}
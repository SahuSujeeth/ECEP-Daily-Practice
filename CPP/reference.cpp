#include<iostream>
using namespace std;
#if 0
int main()
{
    int num = 10;
    cout << "Before update : " << num << endl;
    int *ptr = &num;
    *ptr = 20;
    cout << "After Update : " << num << endl;
}
#endif
int main()
{
    int num = 10;
    cout << "Before update : " << num << endl;
    int &ref = num;//Reference 
    ref = 20;
    cout << "After Update : " << num << endl;
    cout << "Address of num :" << &num << endl;
    cout << "Address of ref :" << &ref << endl;
}
#include<iostream>
using namespace std;
#if 0
void myswap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int num1, num2;
    cout << "Enter num1 : ";
    cin >> num1;
    cout << "Enter num2: ";
    cin >> num2;
    int &ref1 = num1;
    int &ref2 = num2;
    myswap(&ref1,&ref2);
    cout << num1 << endl;
    cout << num2 << endl;
}
#endif
class swapping
{
    int num1;
    int num2;
public :
    void myswap(int *a, int *b)
    {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
    swapping()
    {
        cout << "Enter num1 : ";
        cin >> num1;
        cout << "Enter num2: ";
        cin >> num2;
    }
};
int main()
{

}
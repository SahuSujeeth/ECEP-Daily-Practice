#include<iostream>
#include<cstdlib>
using namespace std;

#if 0
int main()
{
    int *ptr = (int*)malloc(4);//Here we typecast here becoz malloc returns void pointer
    // here for ptr memory will allocate in stack and for 4bytes in heap.
    *ptr = 10;
    cout << "*ptr : " << *ptr << endl;
    free(ptr);

}
#endif

#if 0
int main()
{
    int *ptr = new int(10);
    cout << "*ptr : " << *ptr << endl;
    delete ptr;
}
#endif

int main()
{
    int *ptr = new int[5] {10,20,30};

    for(int i=0;i<5;i++)
    {
        cout << ptr[i] << " " ;
    }
    delete[] ptr;
}

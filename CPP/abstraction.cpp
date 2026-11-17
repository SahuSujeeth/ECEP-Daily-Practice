#include<iostream>
using namespace std;
class Car
{
    void turnOn()
    {
        cout << "Ac has turned ON" << endl;
    }
    void turnOff()
    {
        cout << "Ac has turned OFF" << endl;
    }
public:
    void start()
    {
        cout << "Engine started ..." << endl;
        turnOn();
    }
    void stop()
    {
        cout << "Engine stopped ..." << endl;
        turnOff();
    }

};
int main()
{
    Car c1;
    c1.start();
    c1.stop();
}
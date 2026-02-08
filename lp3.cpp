#include <iostream>
#include <string>
using namespace std;

class SmartDevice
{
private:
    string deviceName;
    string deviceType;
    bool status;

public:
    SmartDevice(string name, string type, bool stat)
    {
        deviceName = name;
        deviceType = type;
        status = stat;
        cout << deviceName << " has been created." << endl;
    }

    void display()
    {
        cout << "Device Name: " << deviceName << endl;
        cout << "Device Type: " << deviceType << endl;
        cout << "Status: " << (status ? "ON" : "OFF") << endl;
        cout << endl;
    }

    ~SmartDevice()
    {
        cout << deviceName << " is powering down. Object destroyed." << endl;
    }
};

int main()
{
    SmartDevice d1("Smart Light", "Light", true);
    SmartDevice d2("Robo Vacuum", "Cleaning Device", false);

    d1.display();
    d2.display();

    return 0;
}

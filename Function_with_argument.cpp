#include<iostream>
using namespace std;

class Time
{
public:
    int hour;
    float minute;
    float secound;

    void setTime(int h, int m, int s);

    void print()
    {
        cout << "Time- " << hour << " : " << minute << " : " << secound;
    }
};

void Time :: setTime(int h, int m, int s)
{
    hour = h;
    minute = m;
    secound = s;
}

int main()
{
    Time T1;

    T1.setTime(4, 15, 2);
    T1.print();

    return 0;
}
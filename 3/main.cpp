#include <iostream>

using namespace std;
bool isLeapYear(unsigned short year)
{
    if(year%4==0)
        return 1;
     else
        return 0;
}

int main()
{
    return isLeapYear(2013);
    return 0;
}

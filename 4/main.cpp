#include <iostream>

using namespace std;

unsigned char dayOfTheWeek(unsigned short year,unsigned char month,unsigned char day)
{
    int daynum=0;
    daynum=(day + 5 + ((26*(month+1))/10) + ((5*(year%100))/4) + ((21*(year/100))/4) )%7;
    return daynum+1;

}

int main()
{
    return dayOfTheWeek(1997,2,7);
    return 0;
}

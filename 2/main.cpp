#include <iostream>

using namespace std;

unsigned char sumBinaryFigure(unsigned long long number)
{
    int nr;
    nr=0;
    while(number>0)
    {
     if (number%2==1)
        nr++;
     number=number/2;
    }
    return nr;
}

int main()
{
    return sumBinaryFigure(111111222211);
    return 0;
}

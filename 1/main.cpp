#include <iostream>

using namespace std;

bool isPalindrom(unsigned long long number)
{
    unsigned int aux,c,pal;
    pal=0;
    aux=number;
    while(aux>0)
    {
        c=aux%10;
        pal=pal*10+c;
        aux=aux/10;
    }
    return pal==number;

}
int main()
{
  cout<<isPalindrom(12321);
  return 0;
}


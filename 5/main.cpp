#include <iostream>

using namespace std;
unsigned int fibonnaci(int index)
{
    int a=1,b=1,c=0,nr=2;
    if(index==0)
        return 0;
     else
        if(index==1)
         return 1;
     else
        if(index==2)
         return 1;
      else
        if(index>2)

          while (nr!=index)
          {
              c=a+b;
              a=b;
              b=c;
              nr++;
              if(nr==index)
                return c;
          }

}

int main()
{
    return fibonnaci(10);
    return 0;
}

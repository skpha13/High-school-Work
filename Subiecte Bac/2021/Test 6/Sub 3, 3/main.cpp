#include <iostream>
#include <fstream>

using namespace std;

ifstream f("bac.in");

int x,i,j,k,lmx;

int main()
{
    while(f>>x)
    {
        if(x<0)
            k++;
        if(k==0 && x>0)
            i++;
        if(k==1 && x>0)
            j++;
        if(k==2)
        {
            if(lmx<i+j+1)
                lmx=i+j+1;
            i=j;
            j=0;
            k=1;
        }
    }
    if(lmx<i+j+1)
        lmx=i+j+1;
    cout<<lmx;
    return 0;
}

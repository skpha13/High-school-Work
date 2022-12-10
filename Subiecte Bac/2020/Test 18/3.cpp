#include <iostream>
#include <fstream>

using namespace std;

ifstream f("bac.txt");

int x,l,lmx,k;

int main()
{
    while(f>>x)
    {
        if(x%10==0)l++;
        else
            {
                if(lmx<l)
                {
                    lmx=l;
                    k=0;
                }
                if(lmx==l)k++;   
                l=0;
            }
    }
    cout<<lmx<<" "<<k;
    f.close();
    return 0;
}
#include <iostream>
#include <fstream>

using namespace std;

ofstream g("bac.out");

int p1,p2,k,i,j,p;

int main()
{
    cin>>p1>>p2;
    for(i=1;i<=9;i++)
        for(k=0;k<=9;k++)
            if(p1/i<10 && p1%i==0)
                for(p=1;p<=9;p++)
                    if(p2/p<10 && p2%p==0)
                        g<<i<<p1/i<<k<<k<<k<<p<<p2/p<<endl;
    return 0;
}

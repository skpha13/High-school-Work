#include <iostream>
#include <fstream>

using namespace std;

ifstream f("BAC.TXT");

int x,s,smax,l=1,lmax,v[100],i;

int main()
{
	while(f>>x)
        v[x]=1;
    i=1;
    while(v[i]==0) i++;
    s+=i;
    for(i;i<99;i++)
    {
        if(v[i] && v[i+1])
        {
            s+=i+1;
            l++;
        }
        else
            {
                s=i+1;
                l=1;
            }
        if(s>smax && l!=1)
        {
            smax=s;
            lmax=l;
        }
    }
    cout<<smax<<" "<<lmax;
    return 0;
}

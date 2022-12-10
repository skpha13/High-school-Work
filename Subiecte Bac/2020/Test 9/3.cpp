#include <iostream>
#include <fstream>

using namespace std;

ifstream f("bac.txt");

int k,x,l,p,mx;

int main()
{
    f>>k;
    while(f>>x)
    {
        if(x%k==0)l++;
        else
            l=0;
        if(l>mx)
        {
            mx=l;
            p=1;
        }
        else
            if(l==mx)p++;
    }
    cout<<mx<<" "<<p;
    f.close();
    return 0;
}
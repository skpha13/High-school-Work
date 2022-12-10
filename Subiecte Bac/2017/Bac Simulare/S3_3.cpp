#include <iostream>

using namespace std;

int ranguri(int n)
{
    int i=0,nr=0;
    while(n)
    {
        if(n%10==i) nr++;
        i++;
        n/=10;
    }
    return nr;
}

int main()
{
    cout<<ranguri(6594270);
    return 0;
}
    


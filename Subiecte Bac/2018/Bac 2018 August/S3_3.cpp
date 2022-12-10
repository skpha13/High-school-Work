#include <iostream>

using namespace std;

int n;

int interval(int n)
{
    int x=n,verif;
    while(true)
    {
        verif=1;
        if(x<2)verif=0;
        for(int d=2;d*d<=x && verif;d++)
            if(x%d==0)verif=0;
        if(verif) return x+1;
        x++;
    }
}

int main()
{
    cout<<interval(11);
    return 0;
}
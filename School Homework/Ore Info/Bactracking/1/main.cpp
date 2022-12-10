#include <iostream>
#include <fstream>

using namespace std;

int x[10],n=5,k;

void afis(int k)
{
    int i;
    for(i=1;i<=k;i++)
        cout<<x[i];
    cout<<endl;
}

int valid(int k)
{
    int i;
    for(i=1;i<k;i++)
        if(x[k]==x[i])return 0;
    return 1;
}

void btk(int k)
{
    int i;
    for(i=1;i<=9;i+=2)
    {
        x[k]=i;
        if(valid(k))
            if(k==n)afis(k);
            else
                btk(k+1);
    }
}

int main()
{
    int i;
    for(i=1;i<=5;i++)
    {
        n=i;
        btk(1);
    }
    return 0;
}

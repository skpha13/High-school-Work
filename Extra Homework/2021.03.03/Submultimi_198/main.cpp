#include <iostream>
#include <fstream>

using namespace std;

ifstream f("submultimi.in");
ofstream g("submultimi.out");

int x[10],n;

void afis(int k)
{
    int i;
    for(i=1;i<=k;i++)
        g<<x[i]<<" ";
    g<<endl;
}

int valid(int k)
{
    int i;
    for(i=1;i<k;i++)
        if(k>1 && x[k]<=x[k-1])return 0;
    return 1;
}

void btk(int k)
{
    int i;
    for(i=1;i<=n;i++)
    {
        x[k]=i;
        if(valid(k))
        {
            afis(k);
            if(k<n)btk(k+1);
        }
    }
}

int main()
{
    f>>n;
    btk(1);
    return 0;
}

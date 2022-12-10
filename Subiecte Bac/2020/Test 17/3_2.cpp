#include <iostream>
#include <fstream>

using namespace std;

ifstream f("bac.txt");

int n,v[10001],nr,i,x,y;

int cautare(int v[],int n,int x, int y)
{
    int ls=1,ld=n,m;
    while(ls<=ld)
    {
        m=(ls+ld)/2;
        if(v[m]>=x && v[m]<=y)
            return 1;
        if(v[m]>=y)
            ld=m-1;
        else
            ls=m+1;
    }
    return 0;
}

int main()
{
    f>>n;
    for(i=1;i<=n;i++)
        f>>v[i];
    while(f>>x>>y)
        if(!cautare(v,n,x,y))nr++;
    cout<<nr;
    f.close();
    return 0;
}
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("bac.txt");

int n,v[10001],i,a,b,ls,ld,m,nr;

int main()
{
    f>>n;
    for(i=1;i<=n;i++)
        f>>v[i];
    f>>a>>b;
    ls=1;
    ld=n;
    while(ls<=ld)
    {
        m=(ls+ld)/2;
        if(v[m]>=a && v[m]<=b)
        {
            nr=v[m];
            ls=m-1;
        }
        if(v[m]>=a)
            ld=m-1;
        else
            ls=m+1;
    }
    if(nr)cout<<endl<<nr;
    else
        cout<<"nu exista";
    f.close();
    return 0;
}
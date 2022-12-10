#include <iostream>
#include <fstream>

using namespace std;

ifstream f("bac.in");

int n,v[30001],i,x,y,ls,ld,m,nr;

int main()
{
    f>>n;
    for(i=n;i>=1;i--)
        f>>v[i];
    f>>x>>y;
    ls=1;
    ld=n;
    while(ls<=ld)
    {
        m=(ls+ld)/2;
        if(v[m]>=x && v[m]<=y)
        {
            nr=v[m];
            ls=m+1;
        }
        if(v[m]>=y)
            ld=m-1;
    }
    if(nr)cout<<endl<<nr;
    else
        cout<<"nu exista";
    f.close();
    return 0;
}
#include <iostream>

using namespace std;

int i,j,a[101][101];

void matrice()
{
    for(i=1;i<=9;i++)
        for(j=1;j<=9;j++)
            if(i<=j) a[i][j] = i;
            else a[i][j] = j;
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=9;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
}

struct divizor
{
    int nr,mic;
}d;

int main()
{
    matrice();
    d.nr=12;d.mic=2;
    if(d.mic==d.nr) cout<<"prim";
    else if(d.mic*d.mic==d.nr) cout<<"patrat";
    else cout<<d.mic<<" "<<d.nr/d.mic;
    return 0;
}
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("grade.in");
ofstream g("grade.out");

int n,v[101][101];

void matrice(int v[101][101])
{
    int i,j,k,p;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
        {
            f>>k>>p;
            v[k][p]=1;
            v[p][k]=1;
        }
}

void grade(int v[101][101])
{
    int i,j,s;
    for(i=1;i<=n;i++)
    {
        s=0;
        for(j=1;j<=n;j++)
            s+=v[i][j];
        g<<s<<" ";
    }
}

int main()
{
    f>>n;
    matrice(v);
    grade(v);
    return 0;
}

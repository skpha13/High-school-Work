#include <iostream>

using namespace std;

int v[101][101],n,i,j;

void citire(int v[101][101])
{
    cin>>n;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            cin>>v[i][j];
}

int verif(int v[101][101])
{
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            if(v[i][j]!=v[j][i] || v[i][j]>1 || v[i][i]==1)
                return 0;
    }
    return 1;
}

int main()
{
    citire(v);
    cout<<verif(v);
    return 0;
}

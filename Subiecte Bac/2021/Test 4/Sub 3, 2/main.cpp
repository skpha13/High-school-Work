#include <iostream>

using namespace std;

int m,n,i,j,a[100][100],mx;

int main()
{
    cin>>m>>n;
    for(i=1;i<=m;i++)
        for(j=1;j<=n;j++)
            cin>>a[i][j];
    for(i=1;i<=m;i++)
    {
        mx=0;
        for(j=1;j<=n;j++)
            if(a[i][j]<21 && mx<a[i][j])
                mx=a[i][j];
        if(mx)cout<<mx<<endl;
        else
            cout<<"nu exista"<<endl;
    }
    return 0;
}

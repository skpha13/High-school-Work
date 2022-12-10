#include <iostream>

using namespace std;

int n,m,a[101],b[101],i,j;

void sub(int n,int m,int a[101],int b[101])
{
    int p,x=1;
    i=1;
    j=1;
    while(i<=n && j<=m)
    {
        if(a[i]<b[j] && x%2!=0)
        {
            cout<<a[i]<<" ";
            i++;
            x=a[i];
        }
        else
        {
            cout<<b[j]<<" ";
            j++;
            x=b[j];
        }
    }
    if(i<=n)
        cout<<a[i]<<" ";
    if(j<=m)
        cout<<b[j]<<" ";
}

int main()
{
    cout<<"n=";cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<"a["<<i<<"]=";
        cin>>a[i];
    }
    cout<<"m=";cin>>m;
    for(j=1;j<=m;j++)
    {
        cout<<"b["<<j<<"]=";
        cin>>b[j];
    }
    sub(n,m,a,b);
    return 0;
}

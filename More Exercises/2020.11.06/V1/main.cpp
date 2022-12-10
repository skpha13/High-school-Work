#include <iostream>

using namespace std;

int n,v[101],a,i,s;

int sub(int v[101],int n,int a)
{
    int k=0,j;
    for(j=1;j<=n;j++)
        if(a>v[j])
            k++;
    return k;
}

int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<"v["<<i<<"]=";
        cin>>v[i];
    }
    for(i=1;i<=n;i++)
        s+=sub(v,n,v[i]);
    if(s==n*(n-1)/2)
        cout<<"DA";
    else
        cout<<"NU";
    return 0;
}

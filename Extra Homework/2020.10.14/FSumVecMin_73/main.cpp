#include <iostream>

using namespace std;

int suma(int v[],int n,int m)
{
    int i,j,s=0;
    for(i=0;i<n;i++)
        for(j=i+1;j<=n;j++)
            if(v[i]>v[j])swap(v[i],v[j]);
    for(i=0;i<m;i++)
        s+=v[i];
    return s;
}

int main()
{
    int n,i,v[101],m;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cout<<"v["<<i<<"]=";
        cin>>v[i];
    }
    cout<<suma(v,n,m);
    return 0;
}

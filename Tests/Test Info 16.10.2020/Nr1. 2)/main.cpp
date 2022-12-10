#include <iostream>

using namespace std;

int nr(int a[100],int n)
{
    int i,s,mn,mx,p,u;
    s=0;
    mx=mn=a[1];
    p=u=1;
    for(i=2;i<=n;i++)
    {
        if(mx<a[i])
        {
            mx=a[i];
            u=i;
        }
        if(mn>a[i])
        {
            mn=a[i];
            p=i;
        }
    }
    if(p>u)swap(p,u);
    for(i=p+1;i<u;i++)
        s+=a[i];
    return s;
}

int main()
{
    int a[100],n,i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<"a["<<i<<"]=";
        cin>>a[i];
    }
    cout<<nr(a,n);
    return 0;
}

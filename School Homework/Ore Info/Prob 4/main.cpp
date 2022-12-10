#include <iostream>

using namespace std;

int n,i,a[100];

int cmmdc(int a,int b)
{
    int r;
    r=a%b;
    while(r!=0)
    {
        a=b;
        b=r;
        r=a%b;
    }
    return b;
}

int main()
{
    cout<<"n=";cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<"a["<<i<<"]=";cin>>a[i];
    }
    cout<<endl;
    for(i=2;i<=n;i++)
        if(cmmdc(a[i-1],a[i])==1)cout<<a[i-1]<<" "<<a[i]<<" ";
    return 0;
}

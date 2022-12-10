#include <iostream>

using namespace std;

int n,a[101],i,j,x,k,aux;

int main()
{
    cout<<"n=";cin>>n;
    cout<<"x=";cin>>x;
    while(n)
    {
        a[++i]=n%10;
        n/=10;
    }
    for(k=1;k<=x;k++)
    {
        aux=a[1];
        for(j=1;j<=i;j++)
            a[j-1]=a[j];
        a[i]=aux;
        while(a[1]==0)
            swap(a[1],a[i]);
        for(j=1;j<=i;j++)
            cout<<a[j];
        cout<<endl;
    }
    return 0;
}

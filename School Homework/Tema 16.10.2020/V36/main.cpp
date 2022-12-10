#include <iostream>
#include <fstream>

using namespace std;

ifstream f("bac.in");

int cifra(int a)
{
    if(a==0)return 0;
    while(a)
    {
        if((a%10)%2==0)
            return a%10;
        a/=10;
    }
    return -1;
}

int main()
{
    int a,n,v[100],x,k=0,j,i;
    cout<<"a=";cin>>a;
    cout<<cifra(a);
    cout<<endl;
    f>>n;
    while(f>>x)
        if(cifra(x)!=-1)
        {
            k++;
            v[k]=cifra(x);
        }
    for(i=1;i<k;i++)
        for(j=i+1;j<=k;j++)
            if(v[i]<v[j])swap(v[i],v[j]);
    for(i=1;i<=k;i++)
        cout<<v[i];
    return 0;
}

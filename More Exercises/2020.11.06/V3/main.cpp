#include <iostream>

using namespace std;

int a,b,ok=1,i,v[10],x,p=1;

int cif(int a,int b)
{
    int k=0;
    while(a)
    {
        if(a%10==b)
            k++;
        a/=10;
    }
    return k;
}

int main()
{
    int m=0;
    cin>>a;
    for(i=0;i<=9;i++)
        v[i]=cif(a,i);
    for(i=9;i>=1;i-=2)
        while(v[i])
        {
            m=m*10+i;
            v[i]--;
        }
    cout<<m;
    return 0;
}

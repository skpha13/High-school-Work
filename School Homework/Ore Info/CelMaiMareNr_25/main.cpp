#include <iostream>

using namespace std;

int cmmnr(int n)
{
    int v[20],i,x,c,j;
    c=0;
    i=1;
    while(n)
    {
        i++;
        v[i]=n%10;
        n/=10;
    }
    x=i;
    for(i=1;i<x;i++)
        for(j=i+1;j<=x;j++)
            if(v[i]<v[j])
                swap(v[i],v[j]);
    for(i=1;i<x;i++)
        c=c*10+v[i];
    return c;
}

int main()
{
    int n,c;
    cin>>n;
    cout<<cmmnr(n);
    return 0;
}

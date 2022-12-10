#include <iostream>

using namespace std;

int n,v[101],i;

int pare(int i,int j)
{
    int a,b,m;
    if(i==j)
        if(v[i]%2==0)
            return 1;
        else
            return 0;
    else
    {
        m=(i+j)/2;
        a=pare(i,m);
        b=pare(m+1,j);
        return a+b;
    }
}

int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>v[i];
    if(pare(1,n)==n)cout<<"DA";
    else
        cout<<"NU";
    return 0;
}

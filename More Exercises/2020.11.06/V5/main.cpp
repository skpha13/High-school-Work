#include <iostream>

using namespace std;

int a,i,x[100],v[100],k,j,ok,n;

int f(int a)
{
    for(int d=2;d<=a;d++)
        if(a%d==0)
            return d;
}

int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<"x["<<i<<"]=";
        cin>>x[i];
    }
    for(i=1;i<=n;i++)
        if(f(x[i])==x[i])
        {
            v[++k]=x[i];
            ok=1;
        }
    if(!ok)
        cout<<"NU EXISTA";
    else
    {
        for(i=1;i<k;i++)
            for(j=i+1;j<=k;j++)
                if(v[i]>v[j])swap(v[i],v[j]);
        for(i=1;i<=k;i++)
            cout<<v[i]<<" ";
    }
    return 0;
}

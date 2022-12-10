#include <iostream>

using namespace std;

int n,m,i,j,a[100],b[100],p;

void interesct()
{
    int k=0,c[200];
    i=0;
    j=0;
    if(n<m)
    {
        for(i=1;i<=n;i++)
            for(j=1;j<=m;j++)
                if(a[i]==b[j])
                {
                    k++;
                    c[k]=a[i];
                }
    }
        else
        {
            for(j=1;j<=m;j++)
                for(i=1;i<=n;i++)
                    if(b[j]==a[i])
                    {
                        k++;
                        c[k]=b[j];
                    }
        }
        for(i=1;i<=k;i++)
            cout<<c[i]<<",";
}

void reuniune()
{
    int k=0,c[200];
    for(i=1;i<=n;i++)
    {
        k++;
        c[k]=a[i];
    }
    j=1;
    while(j<=m)
        {
            i=0;
            while(i<=n)
            {
                i++;
                if(b[j]!=a[i])
                {
                    k++;
                    c[k]=b[j];
                    j++;
                    break;
                }
            }
        }
    for(i=1;i<=k;i++)
        cout<<c[i]<<",";
}

void scadere()
{
    int k=0,c[200],ok;
    for(i=1;i<=n;i++)
    {
        ok=1;
        for(j=1;j<=m;j++)
            if(a[i]==b[j])
                ok=0;
        if(ok=1)
        {
            k++;
            c[k]=a[i];
        }
    }
    for(i=1;i<=k;i++)
        cout<<c[i]<<",";
}

int main()
{
    cout<<"n=";cin>>n;
    cout<<"m=";cin>>m;
    for(i=1; i<=n; i++)
    {
        cout<<"a["<<i<<"]=";
        cin>>a[i];
    }
    for(j=1;j<=m;j++)
    {
        cout<<"b["<<j<<"]=";
        cin>>b[j];
    }
    cout<<endl<<"a)"<<" "<<"C=(";
    interesct();
    cout<<")"<<endl<<"b)"<<" "<<"C=(";
    reuniune();
    cout<<")"<<endl<<"c)"<<" "<<"C=(";
    scadere();
    cout<<")";
    return 0;
}

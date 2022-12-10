#include <iostream>

using namespace std;

int main()
{
    int n,a[101],i,x,j=1,t=1,p=0,k=0,y,v,b[101],m=0;
    cout<<"n=";cin>>n;
    for (i=1;i<=n;i++){
        cout<<"a["<<i<<"]=";cin>>a[i];
    }
    while (j<=n){
    x=a[j];
    for (i=1;i<=n;i++){
        if (x==a[i])p++;
    }
    x=a[t+1];
    for (i=1;i<=n;i++){
        if (x==a[i])k++;
    }
    if (k>p)
        y=a[t+1];
            else
                y=a[j];
    for (m;m<=1;m++){
        b[v]=y;break;
        v++;
    }
    k=0;
    p=0;
    j++;
    t++;
    }
    for (v=1;v<=v;v++){
        cout<<b[v];
    }
    return 0;
}

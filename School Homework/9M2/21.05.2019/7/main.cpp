#include <iostream>

using namespace std;

int main()
{
    int n,i,a[101],ma,s=0,k=0;
    cout<<"n=";cin>>n;
    for (i=1;i<=n;i++){
        cout<<"a["<<i<<"]=";cin>>a[i];
    }
    for (i=1;i<=n;i++){
        s=s+a[i];
        if (a[i])k++;
    }
    ma=s/k;
    for (i=1;i<=n;i++)
        if(a[i]==0)a[i]=ma;
    cout<<"a[";
    for(i=1;i<=n;i++)
        cout<<a[i]<<",";
    cout<<"]";
    return 0;
}

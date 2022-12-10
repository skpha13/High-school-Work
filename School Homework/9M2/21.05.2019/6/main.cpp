#include <iostream>

using namespace std;

int main()
{
    int n,i,v[101],s=0,a=0,b=0,p=1;
    cout<<"n=";cin>>n;
    for (i=1;i<=n;i++){
        cout<<"v["<<i<<"]=";cin>>v[i];
    }
    for (i=1;i<=n;i++){
        a=p*v[i]+a;
        b=b*10+v[i];
        p=p*10;
    }
    s=a+b;
    cout<<"s="<<a<<"+"<<b<<"="<<s;
    return 0;
}

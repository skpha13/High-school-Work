#include <iostream>

using namespace std;

int main()
{
    int a,i,v[101],n;
    cout<<"n=";cin>>n;
    for(i=1;i<=n;i++){
        cout<<"v["<<i<<"]=";cin>>v[i];
    }
    for(i=0;i<n/2;i++){
        a=v[i];
        v[i]=v[n-1-i];
        v[n-1-i]=a;
}
    cout<<"v=";
    for(i=1;i<=n;i++){
        cout<<v[i]<<",";
    }
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int i,v[101],n,j;
    cout<<"n=";cin>>n;
    for(i=1;i<=n;i++){
        cout<<"v["<<i<<"]=";cin>>v[i];
    }
    for(i=1;i<=n-1;i++)
        for(j=i+1;j<=n;j++)
            if(v[i]>v[j]) swap(v[i],v[j]);
    cout<<"v=";
    for(i=1;i<=n;i++){
        cout<<v[i]<<",";
    }
    return 0;
}

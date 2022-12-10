#include <iostream>

using namespace std;

int main()
{
    int n,i,v[101],j,x,z;
    cout<<"n=";cin>>n;
    for(i=1;i<=n;i++){
        cout<<"v["<<i<<"]=";cin>>v[i];
    }
    i=1;
    z=1;
    x=v[i];
    while(i<=n){
        if(x==v[i]){
            j=i;
            for(j;j<=n-1;j++)
                v[i]=v[i+1];
            n--;
        }
        if(i==n && z<=n){
            x=v[z+1];
            i=1;
        }
    }
    cout<<"v=";
    for(i=1;i<=n;i++){
        cout<<v[i]<<",";
    }
    return 0;
}

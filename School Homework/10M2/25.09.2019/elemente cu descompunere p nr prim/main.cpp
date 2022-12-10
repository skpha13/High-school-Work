#include <iostream>

using namespace std;

int main()
{
    int n,v[101],p,i,k,x,z;
    cout<<"n=";cin>>n;
    cout<<"p=";cin>>p;
    for (i=1;i<=n;i++){
        cout<<"v["<<i<<"]=";cin>>v[i];
    }
    k=0;
    i=1;
    if (p==1)cout<<"Imposibil";
    while(i<=n){
        x=v[i];
        z=i;
        if(x%p==0){
        while(x%p==0 && z==i){
            k++;
            x=x/p;
            }
        }
        if(k!=0)cout<<v[i]<<" "<<"la"<<" "<<"a"<<" "<<k<<" ";
        k=0;
        i++;
    }
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int n,p,q,a[100],x,i,k;
    cout<<"n=";cin>>n;
    cout<<"p=";cin>>p;
    cout<<"q=";cin>>q;
    for (i=1;i<=n;i++){
        cout<<"a["<<i<<"]=";cin>>a[i];
    }
    while (p<=q){
    for (i=1;i<=n;i++){
         if(a[i]==p){
                x=a[i];
                p++;
         }
        k=1;
        while (k<=n){
            if(a[k]==x){
                for (i=k;i<=n-1;i++){
                    a[i]=a[i+1];
                }
                n--;
            }
                else
                    k++;
        }
    }
    }
    cout<<"a[";
    for(i=1;i<=n;i++){
        cout<<a[i]<<",";
    }
    cout<<"]";
    return 0;
}

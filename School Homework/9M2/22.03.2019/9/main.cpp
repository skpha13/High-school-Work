#include <iostream>

using namespace std;

int main()
{
    int n,i,a[100],p=1,k=0;
    cout<<"n=";cin>>n;
    for(i=1;i<=n;i++){
        cout<<"a["<<i<<"]=";
        cin>>a[i];
        if(i%2!=0 && a[i]<0){
                k++;
                p=p*a[i];
        }
    }
    cout<<"Produsul elementelor este:"<<p<<endl;
    cout<<"Numarul elementelor este:"<<k<<endl;
    return 0;
}

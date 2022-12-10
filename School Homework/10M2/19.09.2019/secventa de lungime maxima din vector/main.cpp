#include <iostream>

using namespace std;

int main()
{
    int n,i,lmax=0,j,pmax,a[101];
    cout<<"n=";cin>>n;
    for (i=1;i<=n;i++){
        cout<<"a["<<i<<"]=";cin>>a[i];
    }
    i=1;
    while (i<n){
        j=i+1;
        while (a[j]>a[j-1] && j<=n){
            j++;
            if(j-i>lmax){
                lmax=j-i;
                pmax=i;
            }
        }
        i=j;
    }
    for (i=0;i<lmax;i++)
        cout<<a[pmax+i]<<" ";
    return 0;
}

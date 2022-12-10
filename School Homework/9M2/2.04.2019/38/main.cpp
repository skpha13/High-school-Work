#include <iostream>

using namespace std;

int main()
{
    int n,i,a[101],k=0,l=1,v,x,p,m=1;
    cout<<"n=";cin>>n;
    cout<<"x=";cin>>x;
    for (i=1;i<=n;i++){
        cout<<"a["<<i<<"]=";cin>>a[i];
    }
    while (l<=n){
        if (a[l]==0){
            for (i=l;i<=n-1;i++){
                a[i]=a[i+1];
            }
            n--;
        }
                else{
                    l++;
                }
      k++;
   }
   p=n;
   for(m;m<=k;m++){
   for (i=1;i>=p;i--){
        n=n+1;
        for (v=n;v>=n;i--){
            a[i]=a[i-1];
        }
   }
   a[n]=a[x];
   }
   cout<<"a[";
   for (i=1;i<=n;i++){
        cout<<a[i]<<",";
   }
   cout<<"]";
   return 0;
}

#include <iostream>

using namespace std;

int main()
{
   int n,a[101],k=1,i;
   cout<<"n=";cin>>n;
   for (i=1;i<=n;i++){
        cout<<"a["<<i<<"]=";cin>>a[i];
   }
   while (k<=n){
        if (a[k]==0){
            for (i=k;i<=n-1;i++){
                a[i]=a[i+1];
            }
            n--;
        }
                else
                    k++;
   }
   cout<<"a[";
   for (i=1;i<=n;i++){
        cout<<a[i]<<",";
        0;
   }
   cout<<"]";
   return 0;
}

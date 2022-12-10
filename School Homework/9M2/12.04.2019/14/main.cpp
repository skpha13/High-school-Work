#include <iostream>

using namespace std;

int main()
{
   int n,a[101],i,x,j=1,p=0,y;
   cout<<"n=";cin>>n;
   for (i=1;i<=n;i++){
        cout<<"a["<<i<<"]=";cin>>a[i];
   }
   cout<<"Numere care se repeta sunt: ";
   while (j<=n){
   x=a[j];
   for (i=1;i<=n;i++){
        if (x==a[i])p++;
   }
   if (p>1){
        cout<<x<<",";
        y=x;
   }
   p=0;
   j++;
   }
   return 0;
}

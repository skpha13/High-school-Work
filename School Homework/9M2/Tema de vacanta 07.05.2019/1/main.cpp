#include <iostream>

using namespace std;

int main()
{
   int a[101],n,i,k,x,j;
   cout<<"n=";cin>>n;
   for (i=1;i<=n;i++){
        cout<<"a["<<i<<"]=";cin>>a[i];
   }
   x=a[1];
   for (i=2;i<=n;i++)if(a[i]>x)x=a[i];
   while (a[i]!=x && k<=n)k++;
   for (i=1;i<=k-1;i++)
        for (j=i+1;j<=k;j++)
            if (a[i]>a[j])swap(a[i],a[j]);
   for (i=k;i<=n-1;i++)
        for (j=i+1;j<=n;j++)
            if (a[i]<a[j])swap(a[i],a[j]);
   cout<<"a[";
   for (i=1;i<=n;i++)
        cout<<a[i]<<",";
   cout<<"]";
   return 0;
}

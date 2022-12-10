#include <iostream>

using namespace std;

int main()
{
   int n,i,a[101],x,c1,c2,v,c[101],b,z,minx=30001,d=0;
   cout<<"n=";cin>>n;
   for (i=1;i<=n;i++){
        cout<<"a["<<i<<"]=";cin>>a[i];
   }
   for (i=1;i<=n;i++){
        x=a[i];
        while (x!=0){
            c1=x%10;
            c2=x%100;
            x=x/10;
            if (c2>c1) c2=c1;
        }
        b=c2;
        c[v]=b;
        v++;
   }
   z=v;
   for (v=1;v<=z;v++){
        if (minx>c[v]){
            minx=c[v];
            d=d*10+minx;
            minx=30001;
        }
   }
   cout<<d;
   return 0;
}

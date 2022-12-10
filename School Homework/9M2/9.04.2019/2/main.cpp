#include <iostream>

using namespace std;

int main()
{
   int n,i,x,c,k=0,z,t;
   cout<<"x=";cin>>x;
   cout<<"n=";cin>>n;
   t=x;
   for (i=2;i<=n;i++){
        x=x*t;
   }
   z=x;
   while (x!=0){
        c=x%10;
        k++;
        x=x/10;
   }
   cout<<z<<endl;
   cout<<k<<endl;
   return 0;
}

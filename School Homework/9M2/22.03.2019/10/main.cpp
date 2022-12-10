#include <iostream>

using namespace std;

int main()
{
   int n,i,a[100],k;
   cout<<"n=";cin>>n;
   for (i=1;i<=n;i++){
        cout<<"a["<<i<<"]=";cin>>a[i];
        if (a[i]>0){
            k=i;break;
        }
   }
   cout<<"Primul element pozitiv se afla in pozitia:"<<" "<<k;
   return 0;
}

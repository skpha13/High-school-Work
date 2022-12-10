#include <iostream>

using namespace std;

int main()
{
   int n,a[101],i,ok=1,v;
   cout<<"n=";cin>>n;
   for (i=1;i<=n;i++){
        cout<<"a["<<i<<"]=";cin>>a[i];
        for (v=1;v<=2;v++){
            if(a[i]!=0 && a[i+1]!=0){
                ok=0;
            }
            v=v+1;
        }
   }
   if(ok==1){
        cout<<"Alternativ";
            }
            else
            {
                cout<<"Nu e alternativ";
            }
   return 0;
}

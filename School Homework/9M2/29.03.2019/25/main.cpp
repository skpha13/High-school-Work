#include <iostream>

using namespace std;

int main()
{
   int n,i,a[101],ok=0;
   cout<<"n=";cin>>n;
   for (i=1;i<=n;i++){
        cout<<"a["<<i<<"]=";cin>>a[i];
   }
        for(i=1;i<=i+3;i++){
            while (i<n){
            if(2*a[i+1]==a[i]+a[i+2]){
                cout<<"Numerele sunt in progresie aritmetica";
                ok=1;
                i=i+1;
                }
                        }
        }
        for(i;i<=i+3;i++){
                while(i<n){
            if(a[i+2]*a[i+2]==a[i]*a[i+3]){
                cout<<"Numerele sunt in progresie geometrica";
                ok=1;
                i=i+1;
            }
        }
        }
   if (ok==0){
        cout<<"Numerele nu sunt nici in progresie aritmetica nici in progresie geometrica";
   }
   return 0;
}

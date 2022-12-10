#include <iostream>

using namespace std;

int main()
{
   int n,n1=0,n2=0,s=0,c,k=1,p=1,p2=1;
   cout<<"n=";cin>>n;
   while (n>0){
        c=n%10;
        switch(k){
            case 0:n2=c*p2+n2; p2=p2*10;break;
            case 1:n1=c*p+n1; p=p*10;break;
            case 2:n2=c*p2+n2; p2=p2*10;break;
            case 3:n1=c*p+n1; p=p*10;break;
            case 4:n2=c*p2+n2; p2=p2*10;break;
            case 5:n1=c*p+n1; p=p*10;break;
            case 6:n2=c*p2+n2; p2=p2*10;break;
            case 7:n1=c*p+n1; p=p*10;break;
            case 8:n2=c*p2+n2; p2=p2*10;break;
            case 9:n1=c*p+n1; p=p*10;break;
        }
        n=n/10;
        k++;
   }
   s=n1+n2;
   cout<<"Numarul format cu nr de ordin impar este="<<n1<<endl;
   cout<<"Numarul format cu nr de ordin par este="<<n2<<endl;
   cout<<"Suma lor este="<<s<<endl;
   return 0;
}

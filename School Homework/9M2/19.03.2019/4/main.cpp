#include <iostream>

using namespace std;

int main()
{
    int n,a[100],b,i,x;
    cout<<"n=";cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<"a["<<i<<"]=";
        cin>>a[i];
        x=i%10;
        switch(x){
            case 1:b=a[i];break;
            case 3:b=a[i];break;
            case 5:b=a[i];break;
            case 7:b=a[i];break;
            case 9:b=a[i];break;
        }
        if (b>0){
            cout<<"numerele pozitive de rang impar sunt="<<b;
        }
    }
    return 0;
}

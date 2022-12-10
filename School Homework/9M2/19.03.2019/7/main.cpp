#include <iostream>

using namespace std;

int main()
{
     int i,n,a[100],k=0,s=0,x,ma;
    cout<<"n=";cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<"a["<<i<<"]=";
        cin>>a[i];
        x=a[i]%10;
        switch(x){
            case 0:s=s+a[i];k++;break;
            case 2:s=s+a[i];k++;break;
            case 4:s=s+a[i];k++;break;
            case 6:s=s+a[i];k++;break;
            case 8:s=s+a[i];k++;break;
        }
    }
    ma=s/k;
    cout<<"Media aritmetica a numerelor pare = "<<ma;
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int i,n,a[100],epoz=0,eneg=0,enule=0;
    cout<<"n=";cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<"a["<<i<<"]=";
        cin>>a[i];
        if(a[i]>=0){
            epoz++;
        }
        if(a[i]<=0){
            eneg++;
        }
        if(a[i]==0){
            enule++;
        }
        }
    cout<<"Numere pozitive = "<<epoz<<" "<<"Numere negative = "<<eneg<<" "<<"Numere nule ="<<enule;
    return 0;
}

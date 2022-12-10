#include <iostream>
#include <cmath>

using namespace std;

struct data{int r;
            int im;
            };

data ve[100];
float s;
int n,i,j;

int main()
{
    cout<<"n=";cin>>n;
    cout<<endl;
    for(i=1;i<=n;i++){
        cout<<"Parte Reala: ";cin>>ve[i].r;
        cout<<"Parte Imaginara: ";cin>>ve[i].im;
    }
    cout<<"Modul Numere complexe: ";
    cout<<endl<<endl;
    for(i=1;i<=n;i++){
        s=ve[i].r*ve[i].r+ve[i].im*ve[i].im;
        s=sqrt(s);
        cout<<s<<" ";
    }
    return 0;
}

#include <iostream>

using namespace std;

struct data{int zi;
            int luna;
            int an;
            };

data ve[100];
int n,i,ok=1,j,d;

int main()
{
    cout<<"n=";cin>>n;
    cout<<endl;
    for(i=1;i<=n;i++){
        cout<<"Zi: ";cin>>ve[i].zi;
        cout<<"Luna: ";cin>>ve[i].luna;
        cout<<"An: ";cin>>ve[i].an;
    }
    cout<<endl<<endl;
    for(i=1;i<n;i++)
        for(j=1+1;j<=n;j++){
            if(ve[i].luna>ve[j].luna)
                ok=0;
            d=ve[j].an-ve[i].an;
    }
    if(!ok)d--;
    cout<<"Persoana are "<<d<<" ani"<<endl;
    return 0;
}

#include <iostream>
#include <cmath>

using namespace std;

struct data{int nr;
            int nm;
            };

data ve[100];
int n,i,j,s,x,y;

int main()
{
    cout<<"n=";cin>>n;
    cout<<endl;
    for(i=1;i<=n;i++){
        cout<<"Numarator ";cin>>ve[i].nr;
        cout<<"Numitor ";cin>>ve[i].nm;
    }
    cout<<endl<<endl;
    for(i=1;i<n;i++)
        for(j=i+1;j<=n;j++){
            x=ve[i].nm;
            y=ve[j].nm;
            while(x!=y){
                if(x>y)
                    x=x-y;
                        else
                            y=y-x;
            }
        }
    i=1;
    j=2;
    if(ve[j].nm%ve[i].nm!=0)
        ve[j].nm=ve[j].nm*y;
    ve[i].nr=ve[i].nr*x;
    ve[j].nm=ve[j].nm*x;
    n++;
    ve[j+1].nr=ve[i].nr+ve[j].nr;
    ve[j+1].nm=ve[i].nm;
    cout<<"Numarul este: "<<ve[j+1].nr<<"/"<<ve[j+1].nm;
    return 0;
}

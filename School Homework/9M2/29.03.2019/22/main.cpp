#include <iostream>

using namespace std;

int main()
{
    int n,i,a[101],ok=1,v;
    cout<<"n=";cin>>n;
    for (i=1;i<=n;i++){
        cout<<"a["<<i<<"]=";cin>>a[i];
        for(v;v<=3;v++){
            if (a[i]>0){
                ok=0;
            }
            if(a[i]>0){
                ok=0;
            }
            if(a[i]<0){
                ok=0;
            }
            v=v+1;
        }
    }
    if(ok==1)
            {
        cout<<"Are aspectul cerut";
            }
            else
            {
                cout<<"Nu are aspectul cerut";
            }
    return 0;
}

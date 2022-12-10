#include <iostream>

using namespace std;

const int nmax=1001;

int st[nmax],vf;

int main()
{
    char c='y';
    int i;
    cout<<"Introduceti date in stiva";
    do{
        if(vf<nmax){
            vf++;
            cin>>st[vf];
        }
        cout<<"continuati y/n";cin>>c;
    }
    while(c!='n');
        cout<<"Extragerea elementului din stiva";
    while(vf>0){
        cout<<st[vf]<<' ';
        vf--;
    }
    return 0;
}

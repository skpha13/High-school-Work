#include <iostream>

using namespace std;
int vf[102];

int main()
{
    int n,i,a[101],k=0,d,x,b[101],y;
    cout<<"n=";cin>>n;
    for(i=1;i<=n;i++){
        a[i]=i;
    }
    for(i=1;i<=n;i++)
        for(d=1;d<=a[i];d++)
            if(a[i]%d==0){
                vf[a[i]]++;
            }
    x=vf[1];
    for(i=2;i<=n;i++)
        if(x<vf[i])x=vf[i];
    for(i=1;i<=n;i++){
        if(x==vf[i]){
            k++;
            b[k]=i;
        }
    }
    cout<<endl;
    if(k>=2){
        y=b[1];
        for(i=2;i<=k;i++)
            if(y>b[i])y=b[i];
        cout<<y<<endl;
    }
    return 0;
}

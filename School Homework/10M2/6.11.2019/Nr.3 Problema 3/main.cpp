#include <iostream>

using namespace std;

int main()
{
    int x[101],y[101],z[202],n,m,ls,ld,ok,b,poz,i,k=0;
    cout<<"n=";cin>>n;
    for(i=1;i<=n;i++){
        cout<<"x["<<i<<"]=";cin>>x[i];
    }
    cout<<"m=";cin>>m;
    for(i=1;i<=m;i++){
        cout<<"y["<<i<<"]=";cin>>y[i];
    }
    if(n>m){
        for(i=1;i<=m;i++){
            ls=1;ld=n;ok=0;
            while(ls<=ld && !ok){
                b=(ls+ld)/2;
                if(x[b]==y[i]){
                    ok=1;
                    poz=b;
                }
                    else
                        if(y[i]<x[b])
                            ld=b-1;
                            else
                                ls=b+1;
                }
                if(ok==0){
                    k++;
                    z[k]=y[i];
                    }
            }
    }
        else
            {
            for(i=1;i<=n;i++){
            ls=1;ld=m;ok=0;
            while(ls<=ld && !ok){
                b=(ls+ld)/2;
                if(y[b]==x[i]){
                    ok=1;
                    poz=b;
                }
                    else
                        if(x[i]<y[b])
                            ld=b-1;
                            else
                                ls=b+1;
                if(ok==0){
                    k++;
                    z[k]=y[i];
                    }
                }
            }
        }
    for(i=1;i<=k;i++){
        cout<<z[i]<<",";
        }
    return 0;
}

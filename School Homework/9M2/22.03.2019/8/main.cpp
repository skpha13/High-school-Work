#include <iostream>

using namespace std;

int main()
{
    int n,i,a[100],s=0;
    cout<<"n=";cin>>n;
    for(i=1;i<=n;i++){
        cout<<"a["<<i<<"]=";
        cin>>a[i];
        if(a[i]<0 && a[i]%2==0){
            s=s+a[i];
        }
    }
    cout<<"suma este="<<s;
    return 0;
}

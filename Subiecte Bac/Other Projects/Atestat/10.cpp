#include <iostream>

using namespace std;

int a[101],n,i,j,x,ok;


int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
    for(j=1;j<=9;j++)
    {
        ok=0;
        for(i=1;i<=n;i++)
        {
            x=a[i];
            while(x>9)
                x/=10;
            if(x==j)
            {
                ok=1;
                cout<<a[i]<<" ";
            }
        }
        if(ok) cout<<endl;
    }    
    return 0;
}
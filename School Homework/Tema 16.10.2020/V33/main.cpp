#include <iostream>

using namespace std;

void impar(int x[],int n)
{
    int i,ok=1;
    for(i=1;i<=n;i++)
        if(x[i]%2!=0)
        {
            cout<<"DA";
            ok=0;
            break;
        }
    if(ok)
        cout<<"NU";
}

int main()
{
    int x[100],n,i;
    cout<<"n=";cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<"x["<<i<<"]=";
        cin>>x[i];
    }
    impar(x,n);
    return 0;
}

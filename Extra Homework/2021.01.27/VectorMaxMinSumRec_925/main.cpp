#include <iostream>

using namespace std;

int x[101],n,i,mini,maxi,sum;

void P(int x[],int n,int &mini,int &maxi,int &sum)
{
    if(n==0)
    {
        sum=0;
        maxi=mini=x[0];
    }
    else
    {
        P(x,n-1,mini,maxi,sum);
        sum+=x[n-1];
        if(maxi<x[n-1])maxi=x[n-1];
        if(mini>x[n-1])mini=x[n-1];
    }
}

int main()
{
    cin>>n;
    for(i=0;i<n;i++)
        cin>>x[i];
    P(x,n,mini,maxi,sum);
    cout<<mini<<" "<<maxi<<" "<<sum;
    return 0;
}

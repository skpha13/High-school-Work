#include <iostream>
#include <iomanip>

using namespace std;

void p(int n,int x[101],int &mini, int &maxi,int &sum)
{
    int i;
    sum=x[1];
    mini=maxi=x[1];
    for(i=2;i<=n;i++)
    {
        if(mini>x[i])
            mini=x[i];
        if(maxi<x[i])
            maxi=x[i];
        sum+=x[i];
    }
}

int main()
{
    int n,x[101],i,mini,maxi,sum;
    float ma,s2;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<"x["<<i<<"]=";
        cin>>x[i];
    }
    p(n,x,mini,maxi,sum);
    s2=sum-maxi-mini;
    ma=s2/(n-2);
    cout<<fixed<<setprecision(3)<<ma;
    return 0;
}

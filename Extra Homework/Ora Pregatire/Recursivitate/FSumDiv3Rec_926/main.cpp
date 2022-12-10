#include <iostream>

using namespace std;

int n,v[101],i;

int sum3(int v[101],int n)
{
    if(n==0)return 0;
    else
        if(v[n-1]%3==0)return v[n-1]+sum3(v,n-1);
        else
            return sum3(v,n-1);
}

int main()
{
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"v["<<i<<"]=";
        cin>>v[i];
    }
    cout<<sum3(v,n);
    return 0;
}

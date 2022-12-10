#include <iostream>

using namespace std;

int sum3(int v[],int n)
{
    int i,s=0;
    for(i=0;i<n;i++)
        if(v[i]%3==0)
            s+=v[i];
    return s;
}

int main()
{
    int n,i,v[101];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"v["<<i<<"]=";
        cin>>v[i];
    }
    cout<<sum3(v,n);
    return 0;
}

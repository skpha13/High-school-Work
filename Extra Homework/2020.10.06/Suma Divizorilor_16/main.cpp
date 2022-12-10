#include <iostream>

using namespace std;

int sum_div(int n)
{
    int s=0,i;
    for(i=1;i<=n;i++)
        if(n%i==0)
            s+=i;
    return s;
}

int main()
{
    int n;
    cin>>n;
    cout<<sum_div(n);
    return 0;
}

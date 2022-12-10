#include <iostream>

using namespace std;

int ntermen(int a,int r,int n)
{
    if(n==1)return a;
    return ntermen(a,r,n-1)+r;
}

int main()
{
    int a,r,n;
    cin>>a>>r>>n;
    cout<<ntermen(a,r,n);
    return 0;
}

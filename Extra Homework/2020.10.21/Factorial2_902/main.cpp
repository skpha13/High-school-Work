#include <iostream>

using namespace std;

int det(int n)
{
    int x=1,i,y=1;
    i=1;
    while(i<=n/2 && x*i<=n)
    {
        x*=i;
        i++;
    }
    i=1;
    do
    {
        y*=i;
        i++;
    } while(y<=n);
    if(n-x==y-n)
        return x;
    if(n-x>y-n)
        return y;
        else
            return x;
}

int main()
{
    int n;
    cin>>n;
    cout<<det(n);
    return 0;
}

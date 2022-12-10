#include <iostream>

using namespace std;

int primR(int n,int i)
{
    if(n<2)return 0;
    else
        if(i*i>n)return 1;
        else
            if(n%i==0)return 0;
            else
                return primR(n,i+1);
}

int main()
{
    int n;
    cin>>n;
    cout<<primR(n,2);
    return 0;
}

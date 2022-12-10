#include <iostream>

using namespace std;

int TreiCifImp(int n)
{
    int k=0;
    while(n)
    {
        if((n%10)%2!=0)
        {
            k++;
            n/=10;
            if (k>=3)
                return 1;
        }
            else
            {
                k=0;
                n/=10;
            }
    }
    return 0;
}

int main()
{
    int n;
    cin>>n;
    cout<<TreiCifImp(n);
    return 0;
}

#include <iostream>

using namespace std;

int a[101],n,k,i;

int multiplu(int a[], int n, int k)
{
    int i,p=0;
    for (i=0;i<n;i++)
        if(a[i]%k==0 && a[i]%10==k)
            p++;
    return p;
}

int main()
{
    cin >> n >> k;
    for (i = 1; i <= n; i++)
    {
        cout << "a[" << i << "]=";
        cin >> a[i];
    }
    cout << multiplu(a, n, k);
    return 0;
}

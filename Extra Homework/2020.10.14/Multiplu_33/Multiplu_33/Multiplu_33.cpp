#include <iostream>

using namespace std;

int multiplu(int a[101], int n, int k)
{
    int i,p=0;
    for (i = 1; i <= n; i++)
    {
        if (a[i] % k == 0 && a[i] % 10 == k)
            p++;
        if (a[i] == 1)p++;
    }
    return p;
}

int main()
{
    int a[101], n, k,i;
    cin >> n >> k;
    for (i = 1; i <= n; i++)
    {
        cout << "a[" << i << "]="; cin >> a[i];
    }
    cout << multiplu(a, n, k);
    return 0;
}
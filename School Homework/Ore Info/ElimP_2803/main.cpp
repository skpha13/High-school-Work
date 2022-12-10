#include <iostream>
#include <cstring>

using namespace std;

char s[256];
int p,i,k;

int main()
{
    cin>>p;
    cin.get();
    cin.getline(s,256);
    while(k+p-1<strlen(s))
    {
        for(i=0;i<strlen(s);i++)
            if(i<k || i>k+p-1)
                cout<<s[i];
        k++;
        cout<<endl;
    }
    return 0;
}

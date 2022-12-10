#include <iostream>
#include <cstring>

using namespace std;

char s[256];
int i,k,j;

int main()
{
    cin.getline(s,256);
    for(j=0;j<strlen(s);j++)
    {
        for(i=0;i<strlen(s);i++)
            if(i!=k)
                cout<<s[i];
        cout<<endl;
        k++;
    }
    return 0;
}

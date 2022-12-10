#include <iostream>
#include <cstring>

using namespace std;

char s[256];
int i;

int main()
{
    cin.getline(s,256);
    while(i<strlen(s))
    {
        if(strchr(".!",s[i]))
        {
            cout<<s[i]<<endl;
            i++;
        }
        else
        {
            if(strchr(" ",s[i-1]) && s[i]>='a' && s[i]<='z')
                s[i]-=32;
        }
        cout<<s[i];
        i++;
    }
    return 0;
}

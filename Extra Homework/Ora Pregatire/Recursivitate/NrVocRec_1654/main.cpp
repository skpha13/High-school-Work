#include <iostream>
#include <cstring>

using namespace std;

char s[10001];

int nr_vocale(char s[10001])
{
    if(s[0]==NULL)return 0;
    else
        {
            char c=s[strlen(s)-1];
            s[strlen(s)-1]=NULL;
            if(strchr("aeiouAEIOU",c))
                return 1+nr_vocale(s);
            else
                return nr_vocale(s);
        }
}

int main()
{
    cin.getline(s,10001);
    cout<<nr_vocale(s);
    return 0;
}

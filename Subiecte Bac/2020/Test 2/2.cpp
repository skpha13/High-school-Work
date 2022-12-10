#include <iostream>
#include <cstring>

using namespace std;

int i,k,j,t;
char s[101];

int main()
{
	cin.getline(s,101);
	for(i=0;i<strlen(s);i++)
	{
		if(strchr("-",s[i]))
		{
			t=k=i;
			while(s[k]!=' ')
                k++;
            strcpy(s+t,s+k+1);
		}
	}
	cout<<s;
	return 0;
}

#include <iostream>

using namespace std;

int main()
{
    Int i_prim(int n)
{
    int i, r=0, n1, n2;
    bool prim = true;
    for(i = 2; i*i <= n; i++)
     if(n % i == 0)
     {
         prim = false;
         break;
     }
   if (!prim)
        {
           n2=n;
           n1=n;
           while(true)
          {
              n1++;
              prim = true;
              for(i = 2; i*i <= n1; i++)
               if(n1 % i == 0)
                {
                  prim = false;
                  break;
                }
              if (prim) break;
          }
          while(true)
          {
              n2--;
              prim = true;
              for(i = 2; i*i <= n2; i++)
               if(n2 % i == 0)
                {
                  prim = false;
                  break;
                }
              if (prim) break;
          }
         r = n1 - n2;

        }
        return r;
}
}

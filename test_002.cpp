# include <iostream>
#include <math.h>

using namespace std ;
int main ()
{
    int a,b,m;
    cin>>a>>b;
    cout<<(a+b)<<endl;
   if ((a-b)<0){
       m=(a-b)*-1;
   }
    else m=(a-b);
    
    cout<<m<<endl;


return 0;
}
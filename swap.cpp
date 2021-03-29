# include <iostream>

using namespace std ;
void swap(int &m, int & n){
   int swap = n; n=m; m= swap;
    return;

}
int main ()
{
  int a= 11;
  int b=12;
  swap(a,b);
  cout<<a <<endl << b<<endl;
return 0;
}
# include <iostream>

using namespace std ;
int main ()
{
float inc , rate ;
cout<<"Please enter your income"<<endl;
cin>>inc;
// if (inc<= 180000)
cout<<"No tax owed"<<endl;
if (inc>180000)
cout<<"You have to clear the tax"<<endl;
return 0;
}
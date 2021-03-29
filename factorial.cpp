# include <iostream>

using namespace std ;

int factorial(int m){
    if (m<=1){
        return 1;
        
    }
    return m * factorial (m-1);
}
int main ()
{
    int m;
cout<<"Enter the value of m"<<endl;
cin>>m;
cout<<"The factorial is " << factorial(m);


return 0;
}
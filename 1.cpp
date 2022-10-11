#include<iostream>
#include<math.h>
using namespace std;
double fn(double x)
{
    return pow(2,pow(x,2))-3*(pow(7,x+1));
}
double diff(double x)
{
    return log(2)*2*x*(pow(2,pow(x,2))) - (3*log(7)*(pow(7,x+1)));
}

int main()
{
    double a,e=0,z;
    cout<<"Enter Number : ";
    cin>>a;
    do
    {
        e++;
        z=a-(fn(a)/diff(a));
        cout<<"The iterative"<<e<<"root is"<<z;
        a=z;
        cout<<endl;
    }while((abs(fn(z))>1e-16) && (e<15));
    return 0;
}

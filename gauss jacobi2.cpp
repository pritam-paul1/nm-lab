#include<iostream>
#include<iomanip>
#include<math.h>
/* In this example we are solving
   4x + y + z = 2
   x + 5y + 2z = -6
   x + 2y + 3z = -4
*/
/* Arranging given system of linear
   equations in diagonally dominant
*/
/* Equations:
   x = (2-y-z)/4
   y = (-6-x-2z)/5
   z = (-4-x-2y)/3
*/
/* Defining function */
#define f1(x,y,z)  (2-1*y-1*z)/4
#define f2(x,y,z)  (-6-1*x-2*z)/5
#define f3(x,y,z)  (-4-1*x-2*y)/3
using namespace std;
int main()
{
 float x0=0, y0=0, z0=0, x1, y1, z1, e1, e2, e3, e;
 int step=1;
 cout<< setprecision(6)<< fixed;
 cout<<"Correct Up To Decimal: ";
 cin>>e;
 cout<< endl<<"Count\tx\t\ty\t\tz"<< endl;
 do
 {
  x1 = f1(x0,y0,z0);
  y1 = f2(x0,y0,z0);
  z1 = f3(x0,y0,z0);
  cout<< step<<"\t"<< x1<<"\t"<< y1<<"\t"<< z1<< endl;
  e1 = fabs(x0-x1);
  e2 = fabs(y0-y1);
  e3 = fabs(z0-z1);
  step++;
  x0 = x1;
  y0 = y1;
  z0 = z1;
 }
 while(e1>e && e2>e && e3>e);
 cout<< endl<<"Solution: x = "<< x1<<", y = "<< y1<<" and z = "<< z1;
 return 0;
}


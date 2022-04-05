#include <iostream>
#include <math.h>
int main()
{
float l, k, a, b, c;
std::cout<<"Enter l:";
std::cin >>l;
std::cout<<"Enter k:";
std::cin>>k;
a=(l-3*k)/4;
b=(k+2*l)/(7*k);
c=2*l*k-5.6;
if (fabs(a)>2)
std::cout<<"sin(a)="<<sin(a);
if (fabs(b)>2)
std::cout<<"sin(b)="<<sin(b);
if (fabs(c)>2)
std::cout<<"sin(c)="<<sin(c);
return 0;
}

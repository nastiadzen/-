#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
int main()
{
float x, y;
std::cout<<"Enter x:";
std::cin>>x;
if (x>=2)
y=pow(sin(x), 2);
else if (x<=-2)
y=pow(M_LOG10E, 2);
else
y=(pow(x, M_E))-(pow(M_E, (-x)));
std::cout<<"y="<<y;
return 0;
}
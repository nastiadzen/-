#include <iostream>
#include <math.h>
int main()
{
float x, y, r;
std::cout<<"Enter r:";
std::cin >>r;
std::cout<<"Enter x:";
std::cin>>x;
std::cout<<"Enter y:";
std::cin>>y;
if ((x>=0) && (y>=0) && (pow(x,2)+pow(y,2)>=(pow(r,2))/4))
std::cout<<"Точка належить фігурі";
else
std::cout<<"Точка не належить фігурі";
return 0;
}

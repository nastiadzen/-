#include<iostream>
int main ( )
{
float a, b, c, s;
std::cout<<"Enter a=";
std::cin>>a;
std::cout<<"Enter b=";
std::cin>>b;
std::cout<<"Enter c=";
std::cin>>c;
if ((a<b) && (a<c))
s=b+c;
if ((b<a) && (b<c))
s=a+c;
if ((c<a) && (c<b))
s=a+b;
std::cout<<"Сума двох найбільших "<<s;
return 0;
}

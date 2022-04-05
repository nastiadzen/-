#include <iostream>
int main()
{
float a,b,c,d;
std::cout<<"Введіть число a";
std::cin>>a;
std::cout<<"Введіть число b";
std::cin>>b;
std::cout<<"Введіть число c";
std::cin>>c;
std::cout<<"Введіть число d";
std::cin>>d;
if ((a==c) && (b==d))
std::cout<<"Це паралелограм";
else
std::cout<<"Це не паралелограм";
return 0;
}

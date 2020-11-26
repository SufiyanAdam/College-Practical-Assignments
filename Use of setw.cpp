#include<iostream>
#include<iomanip>

using namespace std;
int main ()
{
float f33 = 23.33;
char chA = 'A';
int d = 123;

std::cout<<setw(5)<<d;
std::cout<<setw(5)<<chA;
std::cout<<setw(5)<<"\n"<<f33;
return 0;
}

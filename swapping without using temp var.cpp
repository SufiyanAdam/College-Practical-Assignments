#include<iostream>
using namespace std;
    int main()
    {
     int x = 10;
     int y = 20;
     cout<<"The value of X before swapping :" <<x<< "\n The value of Y before swapping :" <<y;
      x = x + y;
      y = x - y;
      x = x - y;
      cout<<"\nThe value of X after swapping :" <<x<< "\n The value of Y after swapping :" <<y;
      return 0;
    }


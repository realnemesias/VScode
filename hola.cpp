#include<iostream>
using namespace std;
int main()
{
   double x, y;
   double a, b;
   cout << "introduce 3 numeros";
   cin >> a >> b >>y;
   x = a*b;
   bool cmp = (x==y);
   cout << a <<"*" << b << "==" << y <<" "
        << boolalpha << cmp 
        << endl;
}
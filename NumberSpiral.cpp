#include<iostream>
using namespace std;
void solve()
{
  long long int i , j;
  cin >> i >> j;
  if(j >= i)
  {
    if(j&1)
    {
      cout << j*j-(i-1) << endl;
    }
    else 
    {
      cout << (j-1)*(j-1)+i << endl;
    }
  }
  else if(j < i)
  {
    if(i&1)
    {
      cout << (i*i) - (i-1)-(i-j) << endl;
    }
    else 
    {
      cout << (i-1)*(i-1)+i+(i-j) << endl;
    }
  }
}
int main ()
{
  long long int t;
  cin >> t;
  while(t--)
  {
    solve();
  }
}
/*
Currently i have no idea how to solve this problem 
but im analyzing you know

We can approximate some value of j which is column  (We are using odd column are actual power of 2 of index) 
So we can approximate some value with it .
What about other value of array ? that's also what im wondering


I found something dude


We need to see column or row which one is maximum depends on that we will use different algorithm
if column is greater than row 
we need to determine column number is even or odd , if its odd we need to multiply it by itself and minus our row by 1 and minus 



*/
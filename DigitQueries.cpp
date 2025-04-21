#include<iostream>
using namespace std;
int main ()
{
  int t;
  cin >> t;
  while(t--)
  {
    long long int  n, digit=0;
    cin >> n;
    int n1 = n;
    while(n1!=0)
    {
      n1=n1/10;
      digit++;
    }
    
    int reducer = 0;
    int copy1 = digit;
    while((copy1-1)!=0)
    {
      reducer = reducer * 10 + 9;
      copy1--;
    }
    
    long long int General  = reducer + (n - reducer) / digit;
    if((n - reducer) % digit!=0)
    {
      cout << to_string(General+1)[(n - reducer) % digit-1] << "\n";
    }
    else
    {
      cout << to_string(General)[to_string(General).size()-1] << "\n";
    }

  }
}
/*
0
1
7
7
6*/
#include<iostream>
using namespace std;
int main ()
{
  long long int t;
  cin >> t;
  while(t--)
  {
    long long int a, b;
    cin >> a >> b;
    while(a>0 || b>0)
    {
      if(a>b)
      {
        int m = min(a/2, b);
        a=a-m;
        b=b-m;
      }
      else
      {
        int m = min(b/2, a);
        b=b-m;
        a=a-m;
      }
      // cout << a <<" " << b << endl;
    }
    if(a==b && a==0)
    {
      cout << "YES" <<endl;
    }
    else
    {
      cout << "NO" << endl;
    }
  }
 
}
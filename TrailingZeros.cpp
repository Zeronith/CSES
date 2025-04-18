#include<iostream>
#include<math.h>
using namespace std;
int main ()
{
  long long int n , k=5, ans= 0; 
  cin >> n;
  while(n/k!=0)
  {
    ans+=n/k;
    k*=5;
  }
  cout << ans << endl;
}
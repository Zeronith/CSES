#include<iostream>
#include<math.h>
using namespace std;
int main ()
{
  long long int n, ans=1; 
  cin >> n;
  long long int ans2 = pow(10,9)+7;
  for(int i=0; i<n; i++)
  {
    ans*=2;
    if(ans>=ans2)
    {
      ans=ans%ans2;
    }
  }
   cout << ans << endl;
}
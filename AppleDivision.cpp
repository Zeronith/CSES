#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int n;
  cin >> n;
  vector <long long int> v(n);
  long long int sum =0 ;
  for(int i=0; i<n ; i++)
  {
    cin >> v[i];
    sum+=v[i];
  }

  vector<bool> dp(sum + 1, false);
  dp[0] = true; // sum 0 is always possible

  for(int i=0; i<n; i++)
  {
    for(int j=0; j<n ; j++)
    {

    }
  }

}
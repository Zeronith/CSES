#include<iostream>
using namespace std;
long long int comb(long long int n)
{
  return (n*(n-1))/2;
}
void solve(long long int n)
{
  cout << 0 << endl;
  for(int i=2; i<=n; i++)
  {
    long long int result =  comb(i*i) -  (4 * (i-1) * (i-2 )) ;
    cout << result << endl ;
  }
}
int main ()
{
  long long int n;
  cin >> n;
  solve(n);
}
#include<iostream>
#define ll long long int
using namespace std;
int main ()
{
  ll t ;
  cin >> t;
  while(t--)
  {
    ll n;
    cin >> n;
    ll i=0, digit=0;
    while(i<=n)
    {
      digit++;
      i=i*10+9;
    }
    cout << digit << endl;
  }

}
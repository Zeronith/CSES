#include<iostream>
using namespace std;
int main ()
{
  long long int n;
  cin >> n;
  long long int sum = 0;
  for(int i=0; i<n-1 ; i++)
  {
    long long int e;
    cin >> e;
    sum += e;
  }
  cout << (n * (n+1))/2  - sum;
}
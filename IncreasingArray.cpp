#include<iostream>
#include<vector>
using namespace std;
int main ()
{
  long long int n;
  cin >> n;
  vector<long long int> array(n);
  long long int ans = 0;
  for(long long int i=0;  i<n ; i++)
  {
    cin >> array[i];
    if(i>=1)
    {
      if(array[i]-array[i-1]<0)
      {
        ans+=abs((array[i-1]-array[i]));
        array[i]+=abs(array[i-1]-array[i]);
      }
    }
    // cout << ans << " " ; 
  }
  cout << ans;

}
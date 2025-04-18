#include<iostream>
#include<vector>
using namespace std;
int main ()
{
  long long int n;
  cin >> n;
  long long int sum  = (n * (n+1) )/2 ;
  vector<long long int> set1;
  vector<long long int> set2;
  if(sum%2==1)
  {
    cout << "NO" << endl; 
    return 0;
  }
  else 
  {
    long long int goal = sum / 2;
    long long int i=n;
    while(i>0)
    {
      if(goal-i>=0)
      {
        set1.emplace_back(i);
        goal = goal - i;
      }
      else
      {
        set2.emplace_back(i);
      }
      i--;
    }
  }
  cout << "YES" << endl;
  cout << set1.size() << endl ;
  for(int i=0; i<set1.size(); i++)
  {
    cout << set1[i] << " ";
  }
  cout << endl << set2.size() << endl ;
  for(int i=0; i<set2.size(); i++)
  {
    cout << set2[i] << " ";
  }
  
}
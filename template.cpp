#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int T;
  cin >> T;
  while(T--)
  {
    int n;
    cin >> n;
    set <int> set;
    int el ; 
    for(int i=0; i<n ; i++)
    {
      cin >> el;
      set.insert(el);
    }
    cout << set.size() << endl;
  }

}
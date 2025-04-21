#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main ()
{
  string n;
  vector <string> v;
  cin >> n;
  sort(n.begin(), n.end());
  do{
    v.emplace_back(n);
  }while(next_permutation(n.begin(), n.end()));
  
  cout << v.size() << endl ;
  for(auto element : v)
  {
    cout << element <<  endl;
  }

}
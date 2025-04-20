#include<iostream>
#include<unordered_map>
#include<vector>
#include<algorithm>
using namespace std;
void print(unordered_map <long long int,long long int> map)
{
  vector<char> value ;
  for(auto element : map)
  {
    if(element.second%2==0)
    {
      for(long long int i=0; i<(element.second/2) ; i++)
      {
        value.emplace_back(char(element.first+'A'));
        cout << char(element.first+'A');
      }
    }
  }
  for(auto element : map)
  {
    if(element.second%2==1)
    {
      for(long long int i=0; i<element.second ; i++)
      {
        cout << char(element.first+'A');
      }
    }
  }
  reverse(value.begin(), value.end());
  for(auto element : value)
  {
    cout << element;
  }
 
}
int main ()
{
  string str;
  cin >> str ;
  unordered_map <long long int,long long int> map(26);


  // Using map to count frequency
  for(int i=0; i<str.size(); i++)
  {
    map[str[i]-'A']++;
  }


  // Iterating through map to count even and odd frequency 
  long long int even=0, odd=0;
  for(auto element : map)
  {
    if(element.second%2==0)
    {
      even++;
    }
    else 
    {
      odd++;
    }
  }


  // Writing no solution cases
  if(odd > 1)
  {
    cout << "NO SOLUTION " << endl;
  }
  else if(str.size()%2==0 && odd > 0)
  {
    cout << "NO SOLUTION " << endl; 
  }
  else 
  {
    print(map);
  }
}
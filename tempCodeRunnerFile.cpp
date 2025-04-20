#include<iostream>
#include<unordered_map>
using namespace std;
int main ()
{
  string str;
  cin >> str ;
  unordered_map <char, int> map(26);
  for(int i=0; i<str.size(); i++)
  {
    map[str[i]]++;
  }
  int odd = 0 , even = 0;
  for(int i=0; i<map.size(); i++)
  {
    if(map[char('A'+ i)]%2==1)
    {
      odd++ ;
    }
    else
    {
      even++;
    }
  }
  if(str.size()%2==0 && odd>0)
  {
    cout << "NO SOLUTION" << endl;
  }
  else if(str.size()%2==1 && odd!=1 )
  {
    cout << "NO SOLUTION" << endl; 
  }
  // cout << str << " " << odd << " " << even;
  else
  {
    
  }
}
#include<iostream>
#include<bitset>
#include<algorithm>
#include<math.h>
using namespace std;
int main ()
{
  int n;
  string str="";
  cin >> n;
  for(int i=0; i<pow(2,n) ; i++)
  {
    int grayCode = i ^ (i>>1); // Gray Code Algorithm
    while(grayCode>0)
    {
      str += char((grayCode%2)+'0');
      grayCode = grayCode/2;
    }
    while(str.size()<n)
    {
      str+='0';
    }
    reverse(str.begin() , str.end());
    
    cout << str << endl;
    str = "";
  }
}
#include<iostream>
#include<limits.h>
using namespace std;
int main ()
{
  string sequence;
  long long int max = LONG_MIN;
  cin >> sequence;

  long long int rep = 1;
  for(int i=0; i<sequence.length(); i++)
  {
    if(sequence[i] == sequence[i+1])
    {
      rep++;
    }
    else
    {
      if(max < rep)
      {
        max = rep;
      }
      rep=1; // Би энийг мангартаад if дотор тавьчихсан байсан байна . My Bad 
    }
  }
  /*
  if(max < rep)
  {
    max = rep;
    rep=0;
  }*/
  cout << max;
}
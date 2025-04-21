#include <iostream>
#include<stack>
using namespace std;

void move(stack<int> &Sfrom, stack<int> &Sto, int from, int to) {
  if (Sfrom.empty()) {
      Sfrom.push(Sto.top());
      Sto.pop();
      cout << to << " " << from << "\n";  // Reverse
  }
  else if (Sto.empty()) {
      Sto.push(Sfrom.top());
      Sfrom.pop();
      cout << from << " " << to << "\n";
  }
  else if (Sto.top() > Sfrom.top()) {
      Sto.push(Sfrom.top());
      Sfrom.pop();
      cout << from << " " << to << "\n";
  }
  else {
      Sfrom.push(Sto.top());
      Sto.pop();
      cout << to << " " << from << "\n";  // Reverse
  }
}


int main() {
    int n;
    cin >> n;

    int totalMoves = (1 << n) - 1;

    stack <int> A1 , B1 , C1;
    stack <int> *A = &A1 , *B = &B1 , *C = &C1;
    int from = 1, to = 3, aux = 2;
    if (n % 2 == 0) 
    {
      swap(to, aux); 
      swap(C, B);
    }
    for(int i=totalMoves; i>=1; i--)
    {
      A->push(i);
    }

    cout << totalMoves << endl;
    for (int i = 1; i <= totalMoves; i++) {
        if (i % 3 == 1)
            move(*A, *C, from, to); 
        else if (i % 3 == 2)
            move(*A, *B,from, aux);
        else
            move(*B, *C, aux, to);
    }

    return 0;
}

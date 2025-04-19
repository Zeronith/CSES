#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long a, b;
        cin >> a >> b;
        long long sum = a + b;
        long long mi = min(a, b);
        long long ma = max(a, b);
        
        if(sum % 3 == 0 && mi * 2 >= ma)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}

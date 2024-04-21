#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    cout<<n<<" ";
    
    if (n == 1) {
       return 0;
    }
    do {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = n * 3 + 1;
        }
        cout << n << " ";
    } while (n != 1);
    
    return 0;
}


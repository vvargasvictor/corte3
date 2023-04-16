#include <iostream>
using namespace std;

bool es_primo(int n);

int main() {
    
    for (int i = 1; i <= 1001; i++) {
        if (es_primo(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}


bool es_primo(int n)
 {
    if (n < 2) return false;
    for (int i = 2; i*i <= n; i++) {

        if (n % i == 0) return false;
    }
    return true;
}





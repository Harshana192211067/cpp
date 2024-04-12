#include <iostream>
using namespace std;

int main() {
    int a, b, i, j, c = 0;
    cin >> a >> b;
 
    for (i = a; i < b; i++) {
        if (i > 1) {
            for (j = 2; j < i; j++) {
                if (i % j == 0) {
                    c = 1;
                    break;
                }
            }
            if (c==0) {
                cout << i << " ";
            }
        }
    }
}


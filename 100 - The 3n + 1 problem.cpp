#include <iostream>

using namespace std;

int collatz(long int num) {
    int i = 1;

    while(num != 1) {
        if(num % 2 == 0) {
            num /= 2;
        } else {
            num *= 3;
            num += 1;
        }

        i++;
    }

    return i;
}

int main() {
    while(true) {
        int a, b, ans = 0;
        cin >> a >> b;

        for(int i = a; i <= b; i++) {
            if(collatz(i) > ans)
                ans = collatz(i);
        }

        cout << a << " " << b << " " << ans << endl;
    }
}

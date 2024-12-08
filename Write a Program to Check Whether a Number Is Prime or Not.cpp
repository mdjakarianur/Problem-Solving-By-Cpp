#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 29;

    int cnt = 0;

    if (n <= 1)
        cout << n << " is NOT prime" << endl;
    else {

        for (int i = 1; i <= n; i++) {

            if (n % i == 0)
                cnt++;
        }

        if (cnt > 2)
            cout << n << " is NOT prime" << endl;

              else
            cout << n << " is prime" << endl;
    }

    return 0;
}

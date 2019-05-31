#include <iostream>
#include <cassert>

using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

bool is_duffinian(int num) {
    int s = 0;
    int d = 1;
    while (d <= num) {
        while (num % d != 0)
            d++;
        s += d;
    }
    return gcd(num, s) == 1;
}

void test_duffinian() {
    assert(!is_duffinian(6));  // 6 is not a Duffinian number
    assert(is_duffinian(35));
    cout << "Duffinian number tests passed!" << endl;
}

#include <iostream>
#include <cassert>
#include <cmath>

using namespace std;

bool is_duffinian(int num) {
    int sum_divisors = 0;
    for (int i = 1; i <= num; ++i) {
        if (num % i == 0)
            sum_divisors += i;
    }
    if (sum_divisors <= num + 1)
        return false;
    for (int i = 2; i < min(sqrt(num), sqrt(sum_divisors)); ++i) {
        if (num % i == 0 && sum_divisors % i == 0)
            return false;
    }
    return true;
}

void test_duffinian() {
    assert(!is_duffinian(6));  // 6 is not a Duffinian number
    assert(is_duffinian(35));
    cout << "Duffinian number tests passed!" << endl;
}

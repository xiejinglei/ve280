#include <iostream>
#include <cassert>

using namespace std;

bool is_alternating(int num, int base) {
    int digit, last_digit;
    last_digit = num % base;
    num /= base;
    while (num > 0) {
        digit = num % base;
        if ((digit + last_digit) % 2 == 0)
            return false;
        last_digit = digit;
        num /= base;
    }
    return true;
}

void test_alternating() {
    assert(!is_alternating(24, 10));  // 24 is not an alternating number in base 10
    assert(is_alternating(1, 10));
    assert(is_alternating(2, 10));
    assert(is_alternating(989, 10));
    assert(is_alternating(1234543210, 10));
    assert(is_alternating(1, 2));
    assert(is_alternating(2, 2));
    assert(is_alternating(5, 2));
    assert(is_alternating(21, 2));
    cout << "Alternating number tests passed!" << endl;
}

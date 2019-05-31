#include "lab1.h"


bool is_alternating(int num, int base) {
    int var = num;

    if (num < base) return true;
    else return (((num % base) + (num / base % base)) % 2) && is_alternating(num / base, base);
}

void test_alternating() {
    assert(!is_alternating(24, 10));  // 24 is not an alternating number in base 10
    assert(is_alternating(123454321, 10));
    assert(!is_alternating(10454, 10));
    assert(is_alternating(2, 10));
    assert(is_alternating(21, 2));
    assert(!is_alternating(20, 2));

    // TODO: Add more test cases
    cout << "Alternating number tests passed!" << endl;
}
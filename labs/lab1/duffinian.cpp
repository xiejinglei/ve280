#include <iostream>
#include <cassert>

using namespace std;

int iter(int num, int odev, int base) {
    if (num == 0)
        return 1;
    if (num % 2 == odev)
        return 0;
    return iter(num / base, 1 - odev, base);
}

bool is_alternating(int num, int base) {
    return iter(num / base, num % 2, base);
}

void test_alternating() {
    assert(!is_alternating(24, 10));  // 24 is not an alternating number in base 10
    assert(is_alternating(1, 10));
    assert(is_alternating(212, 10));
    cout << "Alternating number tests passed!" << endl;
}

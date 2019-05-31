#include "lab1.h"

bool is_jordan_polya(int num) {
    int var = num, i = 2;
    bool flag = false;

    if (num == 1) return true;

    while ((var % i) == 0) {
        var /= i;
        i++;
        flag |= is_jordan_polya(var);
    }

    return flag;
}

void test_jordan_polya() {
    assert(!is_jordan_polya(5));  // 5 is not a Jordan-Polya number
    assert(is_jordan_polya(1));
    assert(is_jordan_polya(2));
    assert(is_jordan_polya(4));
    assert(is_jordan_polya(24));
    assert(!is_jordan_polya(60));
    assert(is_jordan_polya(72));
    assert(is_jordan_polya(120));
    assert(!is_jordan_polya(1998));
    assert(is_jordan_polya(17280));
    assert(is_jordan_polya(92160));
    assert(is_jordan_polya(1088640));
    assert(!is_jordan_polya(10000000));
    cout << "Jordan-Polya number tests passed!" << endl;
}
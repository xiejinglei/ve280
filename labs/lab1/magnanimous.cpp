#include "lab1.h"


bool is_magnanimous(int num) {
    if (num < 10) return false;
    int prd, dec = 1;
    bool flag = true;
    string str = to_string(num);

    for (int i = 1; i < str.length(); i++) {
        dec = 1;
        for (int j = 1; j <= i; j++) dec *= 10;
        prd = (num / dec) + (num % dec);
        if (!(is_prime(prd))) flag = false;
    }

    return flag;  // Return a Boolean type
}

bool is_prime(int num){
    if (num == 1) return false;

    int fct = 2;
    bool flag = true;
    while (flag && (fct < num)) {
        while (flag && ((num % fct) == 0)) {
            flag = false;
            num /= fct;
        }
        fct++;
    }
    return flag;
}

void test_magnanimous() {
    assert(!is_magnanimous(15));  // 15 is not a magnanimous number
    assert(!is_magnanimous(10));
    assert(is_magnanimous(11));
    assert(is_magnanimous(12));
    assert(is_magnanimous(20));
    assert(!is_magnanimous(100));
    assert(is_magnanimous(136));
    assert(is_magnanimous(4001));
    assert(is_magnanimous(9959374));
    assert(!is_magnanimous(10000000));
    cout << "Magnanimous number tests passed!" << endl;
}

#include "lab1.h"


bool is_duffinian(int num) {
    int sum = 0, i = 1;

    while (i <= num) {
        if ((num % i) == 0) sum += i;
        i++;
    }
    
    if (sum <= num + 1) return false;

    int bg = (num > sum) ? num : sum,
        sm = (num > sum) ? sum : num,
        tmp = 1;
    while (bg % sm) {
        tmp = bg % sm;
        bg = sm;
        sm = tmp;
    }
    return sm == 1;
}

void test_duffinian() {
    assert(!is_duffinian(6));  // 6 is not a Duffinian number
    assert(is_duffinian(35));
    assert(is_duffinian(1111));
    assert(!is_duffinian(2346));
    assert(is_duffinian(2519));
    assert(!is_duffinian(2570));
    // TODO: Add more test cases
    cout << "Duffinian number tests passed!" << endl;
}

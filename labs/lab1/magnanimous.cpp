#include <iostream>
#include <cassert>

using namespace std;

bool is_prime(int num) {
    if (num < 2) {
        return false;
    }
    if (num == 2) {
        return true;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

bool is_magnanimous(int num) {
    if (num < 10) {
        return false;
    }
    int quotient, remainder, divisor = 10;
    while (num / divisor) {
        quotient = num / divisor;
        remainder = num % divisor;
        if (!is_prime(quotient + remainder)) {
            return false;
        }
        divisor *= 10;
    }
    return true;
}

namespace LucasSkipper {
    bool is_magnanimous(int num) {
        if (num < 10) return false;
        int num1 = num, dig = 0;
        while (num1 > 0) {
            dig++;
            num1 = num1 / 10;
        }
        int divisor = 10;
        for (int i = 1; i < dig; i++) {
            int a = 0, b = 0;
            num1 = num;
            a = num1 / divisor;
            b = num1 % divisor;
            int sum = a + b;
            if (!is_prime(sum)) return false;
            divisor *= 10;
        }
        return true;
    }
}


void test_magnanimous() {
    assert(!is_magnanimous(1));
    assert(!is_magnanimous(2));
    assert(!is_magnanimous(6));
    assert(!is_magnanimous(10));
    assert(is_magnanimous(11));
    assert(is_magnanimous(12));
    assert(!is_magnanimous(15));
    assert(is_magnanimous(20));
    assert(is_magnanimous(23));
    assert(is_magnanimous(25));
    assert(is_magnanimous(92));
    assert(is_magnanimous(94));
    assert(!is_magnanimous(100));
    assert(is_magnanimous(116));
    assert(is_magnanimous(136));
    assert(is_magnanimous(152));
    assert(is_magnanimous(209));
    assert(is_magnanimous(221));
    assert(is_magnanimous(229));
    assert(is_magnanimous(316));
    assert(is_magnanimous(358));
    assert(is_magnanimous(407));
    assert(is_magnanimous(443));
    assert(is_magnanimous(467));
    assert(is_magnanimous(536));
    assert(is_magnanimous(538));
    assert(is_magnanimous(601));
    assert(is_magnanimous(607));
    assert(is_magnanimous(790));
    assert(is_magnanimous(845));
    assert(is_magnanimous(938));
    assert(is_magnanimous(994));
    assert(is_magnanimous(1130));
    assert(is_magnanimous(1910));
    assert(is_magnanimous(2209));
    assert(is_magnanimous(2267));
    assert(is_magnanimous(3554));
    assert(is_magnanimous(3730));
    assert(is_magnanimous(4001));
    assert(is_magnanimous(4463));
    assert(is_magnanimous(4643));
    assert(is_magnanimous(5516));
    assert(is_magnanimous(6443));
    assert(is_magnanimous(7330));
    assert(is_magnanimous(7534));
    assert(is_magnanimous(15938));
    assert(is_magnanimous(22885));
    assert(is_magnanimous(31370));
    assert(is_magnanimous(40463));
    assert(is_magnanimous(53756));
    assert(is_magnanimous(60047));
    assert(is_magnanimous(60667));
    assert(is_magnanimous(66667));
    assert(is_magnanimous(68003));
    assert(is_magnanimous(71536));
    assert(is_magnanimous(82825));
    assert(is_magnanimous(82829));
    assert(is_magnanimous(88229));
    assert(is_magnanimous(222245));
    assert(is_magnanimous(311156));
    assert(is_magnanimous(351938));
    assert(is_magnanimous(359794));
    assert(is_magnanimous(408049));
    assert(is_magnanimous(464447));
    assert(is_magnanimous(773554));
    assert(is_magnanimous(777776));
    assert(is_magnanimous(800483));
    assert(is_magnanimous(806483));
    assert(is_magnanimous(822265));
    assert(is_magnanimous(911390));
    assert(is_magnanimous(975772));
    assert(!is_magnanimous(1169295));
    assert(!is_magnanimous(1207946));
    assert(is_magnanimous(1533736));
    assert(!is_magnanimous(1566969));
    assert(!is_magnanimous(1590901));
    assert(!is_magnanimous(1847920));
    assert(is_magnanimous(2604067));
    assert(!is_magnanimous(2728827));
    assert(is_magnanimous(3155116));
    assert(!is_magnanimous(3425897));
    assert(is_magnanimous(3939118));
    assert(!is_magnanimous(4859974));
    assert(!is_magnanimous(4867712));
    assert(!is_magnanimous(5172860));
    assert(is_magnanimous(5551376));
    assert(is_magnanimous(5731136));
    assert(!is_magnanimous(5784879));
    assert(!is_magnanimous(5983278));
    assert(is_magnanimous(6600227));
    assert(is_magnanimous(6824665));
    assert(is_magnanimous(6864485));
    assert(!is_magnanimous(6871313));
    assert(!is_magnanimous(8024165));
    assert(!is_magnanimous(8741190));
    assert(!is_magnanimous(9152934));
    assert(!is_magnanimous(9610622));
    assert(!is_magnanimous(9730845));
    assert(is_magnanimous(9959374));
    assert(!is_magnanimous(10000000));
    cout << "Magnanimous number tests passed!" << endl;
}

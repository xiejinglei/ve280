#include <iostream>
#include <cassert>
#include <cmath>

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

namespace zianke {
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

namespace wangsoap {
    bool is_magnanimous(int num) {
        if (num < 10) return false;
        for (int i = 1; i < to_string(num).length(); i++) {
            if (!is_prime(num / (int) pow(10, i) + num % (int) pow(10, i)))
                return false;
        }
        return true;
    }
}


void test_magnanimous() {
    assert(!zianke::is_magnanimous(1));
    assert(!LucasSkipper::is_magnanimous(2));
    assert(!wangsoap::is_magnanimous(6));
    assert(!zianke::is_magnanimous(10));
    assert(LucasSkipper::is_magnanimous(11));
    assert(wangsoap::is_magnanimous(12));
    assert(!zianke::is_magnanimous(15));
    assert(LucasSkipper::is_magnanimous(20));
    assert(wangsoap::is_magnanimous(30));
    assert(zianke::is_magnanimous(58));
    assert(LucasSkipper::is_magnanimous(94));
    assert(!wangsoap::is_magnanimous(100));
    assert(zianke::is_magnanimous(136));
    assert(LucasSkipper::is_magnanimous(170));
    assert(wangsoap::is_magnanimous(221));
    assert(zianke::is_magnanimous(227));
    assert(LucasSkipper::is_magnanimous(245));
    assert(wangsoap::is_magnanimous(398));
    assert(zianke::is_magnanimous(536));
    assert(LucasSkipper::is_magnanimous(592));
    assert(wangsoap::is_magnanimous(710));
    assert(zianke::is_magnanimous(958));
    assert(LucasSkipper::is_magnanimous(1112));
    assert(wangsoap::is_magnanimous(1990));
    assert(zianke::is_magnanimous(2429));
    assert(LucasSkipper::is_magnanimous(3370));
    assert(wangsoap::is_magnanimous(3974));
    assert(zianke::is_magnanimous(4001));
    assert(LucasSkipper::is_magnanimous(4247));
    assert(wangsoap::is_magnanimous(4427));
    assert(zianke::is_magnanimous(5516));
    assert(LucasSkipper::is_magnanimous(5558));
    assert(wangsoap::is_magnanimous(5972));
    assert(zianke::is_magnanimous(6001));
    assert(LucasSkipper::is_magnanimous(6067));
    assert(wangsoap::is_magnanimous(6425));
    assert(zianke::is_magnanimous(6443));
    assert(LucasSkipper::is_magnanimous(7394));
    assert(wangsoap::is_magnanimous(7592));
    assert(zianke::is_magnanimous(8029));
    assert(LucasSkipper::is_magnanimous(9710));
    assert(wangsoap::is_magnanimous(17716));
    assert(zianke::is_magnanimous(24407));
    assert(LucasSkipper::is_magnanimous(26201));
    assert(wangsoap::is_magnanimous(28429));
    assert(zianke::is_magnanimous(31756));
    assert(LucasSkipper::is_magnanimous(35116));
    assert(wangsoap::is_magnanimous(60007));
    assert(zianke::is_magnanimous(60403));
    assert(LucasSkipper::is_magnanimous(75374));
    assert(wangsoap::is_magnanimous(79370));
    assert(zianke::is_magnanimous(84265));
    assert(LucasSkipper::is_magnanimous(88621));
    assert(wangsoap::is_magnanimous(111112));
    assert(zianke::is_magnanimous(115772));
    assert(LucasSkipper::is_magnanimous(117116));
    assert(wangsoap::is_magnanimous(193910));
    assert(zianke::is_magnanimous(220021));
    assert(!LucasSkipper::is_magnanimous(290363));
    assert(!wangsoap::is_magnanimous(318364));
    assert(zianke::is_magnanimous(371116));
    assert(!LucasSkipper::is_magnanimous(431125));
    assert(wangsoap::is_magnanimous(559952));
    assert(zianke::is_magnanimous(595598));
    assert(!LucasSkipper::is_magnanimous(618477));
    assert(wangsoap::is_magnanimous(628601));
    assert(zianke::is_magnanimous(806483));
    assert(LucasSkipper::is_magnanimous(911518));
    assert(wangsoap::is_magnanimous(979592));
    assert(!zianke::is_magnanimous(1046623));
    assert(!LucasSkipper::is_magnanimous(1555011));
    assert(wangsoap::is_magnanimous(2008829));
    assert(!zianke::is_magnanimous(2139564));
    assert(!LucasSkipper::is_magnanimous(2650268));
    assert(!wangsoap::is_magnanimous(2728776));
    assert(zianke::is_magnanimous(2828809));
    assert(!LucasSkipper::is_magnanimous(3744093));
    assert(wangsoap::is_magnanimous(4000483));
    assert(!zianke::is_magnanimous(4075891));
    assert(LucasSkipper::is_magnanimous(4408603));
    assert(wangsoap::is_magnanimous(4468865));
    assert(!zianke::is_magnanimous(5012764));
    assert(LucasSkipper::is_magnanimous(5115736));
    assert(!wangsoap::is_magnanimous(5178699));
    assert(zianke::is_magnanimous(5357776));
    assert(!LucasSkipper::is_magnanimous(5692622));
    assert(!wangsoap::is_magnanimous(6068981));
    assert(!zianke::is_magnanimous(6298881));
    assert(LucasSkipper::is_magnanimous(6640063));
    assert(wangsoap::is_magnanimous(6866683));
    assert(zianke::is_magnanimous(7139390));
    assert(LucasSkipper::is_magnanimous(7351376));
    assert(!wangsoap::is_magnanimous(7467701));
    assert(!zianke::is_magnanimous(7768620));
    assert(!LucasSkipper::is_magnanimous(7859754));
    assert(!wangsoap::is_magnanimous(8117680));
    assert(!zianke::is_magnanimous(8723057));
    assert(!LucasSkipper::is_magnanimous(9555091));
    assert(wangsoap::is_magnanimous(9959374));
    assert(!zianke::is_magnanimous(10000000));
    cout << "Magnanimous number tests passed!" << endl;
}

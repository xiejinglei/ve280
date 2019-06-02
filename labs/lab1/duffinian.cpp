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
        if (num % d == 0) s += d;
        d++;
    }
    return s > num + 1 && gcd(num, s) == 1;
}

void test_duffinian() {
    assert(!is_duffinian(1));
    assert(!is_duffinian(6));
    assert(is_duffinian(16));
    assert(is_duffinian(35));
    assert(!is_duffinian(70));
    assert(is_duffinian(221));
    assert(!is_duffinian(281));
    assert(!is_duffinian(304));
    assert(!is_duffinian(316));
    assert(!is_duffinian(344));
    assert(is_duffinian(559));
    assert(!is_duffinian(572));
    assert(is_duffinian(711));
    assert(!is_duffinian(926));
    assert(!is_duffinian(951));
    assert(is_duffinian(959));
    assert(!is_duffinian(980));
    assert(!is_duffinian(1062));
    assert(is_duffinian(1079));
    assert(!is_duffinian(1149));
    assert(!is_duffinian(1154));
    assert(!is_duffinian(1367));
    assert(!is_duffinian(1377));
    assert(!is_duffinian(1439));
    assert(!is_duffinian(1509));
    assert(!is_duffinian(1542));
    assert(!is_duffinian(1572));
    assert(!is_duffinian(1574));
    assert(!is_duffinian(1604));
    assert(!is_duffinian(1660));
    assert(!is_duffinian(1723));
    assert(is_duffinian(1737));
    assert(!is_duffinian(1745));
    assert(!is_duffinian(1776));
    assert(is_duffinian(1819));
    assert(is_duffinian(1909));
    assert(!is_duffinian(2027));
    assert(!is_duffinian(2052));
    assert(!is_duffinian(2055));
    assert(!is_duffinian(2066));
    assert(is_duffinian(2323));
    assert(!is_duffinian(2350));
    assert(!is_duffinian(2352));
    assert(!is_duffinian(2365));
    assert(is_duffinian(2487));
    assert(!is_duffinian(2529));
    assert(is_duffinian(246467));
    assert(is_duffinian(490899));
    assert(is_duffinian(805689));
    assert(is_duffinian(975055));
    assert(is_duffinian(1149851));
    assert(is_duffinian(1210469));
    assert(is_duffinian(1285211));
    assert(is_duffinian(1463659));
    assert(is_duffinian(1786881));
    assert(is_duffinian(2042913));
    assert(is_duffinian(2095139));
    assert(is_duffinian(2236565));
    assert(is_duffinian(2515265));
    assert(is_duffinian(2618285));
    assert(is_duffinian(2722571));
    assert(is_duffinian(2864425));
    assert(is_duffinian(3061853));
    assert(is_duffinian(3109287));
    assert(is_duffinian(3341443));
    assert(is_duffinian(3699323));
    assert(is_duffinian(3707095));
    assert(is_duffinian(3992749));
    assert(is_duffinian(4038183));
    assert(is_duffinian(4324541));
    assert(is_duffinian(4410407));
    assert(is_duffinian(4594391));
    assert(is_duffinian(4614313));
    assert(is_duffinian(4628777));
    assert(is_duffinian(4644187));
    assert(is_duffinian(4815737));
    assert(is_duffinian(5142433));
    assert(is_duffinian(5171851));
    assert(is_duffinian(5604321));
    assert(is_duffinian(5633301));
    assert(is_duffinian(5756605));
    assert(is_duffinian(5911949));
    assert(is_duffinian(6237703));
    assert(is_duffinian(6460947));
    assert(is_duffinian(6500027));
    assert(is_duffinian(6631105));
    assert(is_duffinian(6782647));
    assert(is_duffinian(6894533));
    assert(is_duffinian(6900983));
    assert(is_duffinian(7543601));
    assert(is_duffinian(7640489));
    assert(is_duffinian(7823123));
    assert(is_duffinian(8956861));
    assert(is_duffinian(8981579));
    assert(is_duffinian(9002381));
    assert(is_duffinian(9205787));
    assert(is_duffinian(9224561));
    assert(is_duffinian(9437237));
    assert(is_duffinian(9514283));
    assert(is_duffinian(9773429));
    cout << "Duffinian number tests passed!" << endl;
}

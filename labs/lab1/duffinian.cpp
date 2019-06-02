#include <iostream>
#include <cassert>
#include <vector>

using namespace std;

namespace TZTsai {
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
}

namespace wangsoap {
    bool is_duffinian(int num) {
        int sum = 0;
        vector<int> divisors;
        for (int i = 1; i <= num; i++) {
            if (num % i == 0) {
                sum += i;
                divisors.push_back(i);
            }
        }
        if (sum <= num + 1) return false;
        for (int i = 1; i < divisors.size(); i++) {
            if (sum % divisors[i] == 0)return false;
        }
        return true;
    }
}

void test_duffinian() {
    assert(!TZTsai::is_duffinian(1));
    assert(!wangsoap::is_duffinian(6));
    assert(TZTsai::is_duffinian(8));
    assert(wangsoap::is_duffinian(35));
    assert(TZTsai::is_duffinian(125));
    assert(!wangsoap::is_duffinian(160));
    assert(TZTsai::is_duffinian(175));
    assert(wangsoap::is_duffinian(245));
    assert(TZTsai::is_duffinian(253));
    assert(!wangsoap::is_duffinian(281));
    assert(!TZTsai::is_duffinian(307));
    assert(wangsoap::is_duffinian(327));
    assert(!TZTsai::is_duffinian(465));
    assert(!wangsoap::is_duffinian(506));
    assert(!TZTsai::is_duffinian(661));
    assert(!wangsoap::is_duffinian(790));
    assert(TZTsai::is_duffinian(865));
    assert(!wangsoap::is_duffinian(942));
    assert(!TZTsai::is_duffinian(1020));
    assert(!wangsoap::is_duffinian(1039));
    assert(TZTsai::is_duffinian(1047));
    assert(!wangsoap::is_duffinian(1078));
    assert(TZTsai::is_duffinian(1105));
    assert(!wangsoap::is_duffinian(1162));
    assert(!TZTsai::is_duffinian(1198));
    assert(wangsoap::is_duffinian(1379));
    assert(!TZTsai::is_duffinian(1536));
    assert(wangsoap::is_duffinian(1541));
    assert(TZTsai::is_duffinian(1587));
    assert(!wangsoap::is_duffinian(1612));
    assert(!TZTsai::is_duffinian(1646));
    assert(wangsoap::is_duffinian(1691));
    assert(!TZTsai::is_duffinian(1901));
    assert(!wangsoap::is_duffinian(1907));
    assert(TZTsai::is_duffinian(2197));
    assert(wangsoap::is_duffinian(2201));
    assert(!TZTsai::is_duffinian(2296));
    assert(!wangsoap::is_duffinian(2447));
    assert(TZTsai::is_duffinian(2513));
    assert(!wangsoap::is_duffinian(2539));
    assert(TZTsai::is_duffinian(382675));
    assert(wangsoap::is_duffinian(576905));
    assert(TZTsai::is_duffinian(660641));
    assert(wangsoap::is_duffinian(689967));
    assert(TZTsai::is_duffinian(749459));
    assert(wangsoap::is_duffinian(1026707));
    assert(TZTsai::is_duffinian(1570543));
    assert(wangsoap::is_duffinian(1757831));
    assert(TZTsai::is_duffinian(1806325));
    assert(wangsoap::is_duffinian(2082857));
    assert(TZTsai::is_duffinian(2267255));
    assert(wangsoap::is_duffinian(2389453));
    assert(TZTsai::is_duffinian(2410919));
    assert(wangsoap::is_duffinian(2448993));
    assert(TZTsai::is_duffinian(2632931));
    assert(wangsoap::is_duffinian(2674079));
    assert(TZTsai::is_duffinian(2770099));
    assert(wangsoap::is_duffinian(2865563));
    assert(TZTsai::is_duffinian(2984373));
    assert(wangsoap::is_duffinian(3372341));
    assert(TZTsai::is_duffinian(3737507));
    assert(wangsoap::is_duffinian(3747697));
    assert(TZTsai::is_duffinian(4010503));
    assert(wangsoap::is_duffinian(4038183));
    assert(TZTsai::is_duffinian(4111591));
    assert(wangsoap::is_duffinian(4410407));
    assert(TZTsai::is_duffinian(4540621));
    assert(wangsoap::is_duffinian(4804655));
    assert(TZTsai::is_duffinian(5476645));
    assert(wangsoap::is_duffinian(5630965));
    assert(TZTsai::is_duffinian(5704019));
    assert(wangsoap::is_duffinian(5904593));
    assert(TZTsai::is_duffinian(6042637));
    assert(wangsoap::is_duffinian(6123891));
    assert(TZTsai::is_duffinian(6273827));
    assert(wangsoap::is_duffinian(6386187));
    assert(TZTsai::is_duffinian(6474983));
    assert(wangsoap::is_duffinian(6479257));
    assert(TZTsai::is_duffinian(6573509));
    assert(wangsoap::is_duffinian(6656121));
    assert(TZTsai::is_duffinian(6845365));
    assert(wangsoap::is_duffinian(7091695));
    assert(TZTsai::is_duffinian(7140919));
    assert(wangsoap::is_duffinian(7380353));
    assert(TZTsai::is_duffinian(7456819));
    assert(wangsoap::is_duffinian(7464053));
    assert(TZTsai::is_duffinian(7759481));
    assert(wangsoap::is_duffinian(7867371));
    assert(TZTsai::is_duffinian(7921431));
    assert(wangsoap::is_duffinian(7989301));
    assert(TZTsai::is_duffinian(8082367));
    assert(wangsoap::is_duffinian(8280361));
    assert(TZTsai::is_duffinian(8624779));
    assert(wangsoap::is_duffinian(9196085));
    assert(TZTsai::is_duffinian(9287903));
    assert(wangsoap::is_duffinian(9397803));
    assert(TZTsai::is_duffinian(9555721));
    assert(wangsoap::is_duffinian(9691189));
    assert(TZTsai::is_duffinian(9775919));
    assert(wangsoap::is_duffinian(9979373));
    cout << "Duffinian number tests passed!" << endl;
}

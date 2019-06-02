#include <iostream>
#include <cassert>

using namespace std;

bool is_jordan_polya(int num) {
    if (num == 1) {
        return true;
    } else {
        int i = 2;
        int factorial = i;
        while (factorial <= num) {
            if (num % factorial == 0 && is_jordan_polya(num / factorial)) {
                return true;
            }
            factorial *= ++i;
        }
        return false;
    }
}

namespace wangsoap {
    int factorial(int num) {
        if (num == 1) return 1;
        return (factorial(num - 1) * num);
    }

    bool is_jordan_polya(int num) {
        int n = 2;
        if (num == 1) return true;
        while (factorial(n) <= num) {
            if (num % factorial(n) == 0 && is_jordan_polya(num / factorial(n)))
                return true;
            n++;
        }
        return false;
    }
}

void test_jordan_polya() {
    assert(is_jordan_polya(1));
    assert(is_jordan_polya(2));
    assert(is_jordan_polya(4));
    assert(!is_jordan_polya(5));
    assert(is_jordan_polya(16));
    assert(!is_jordan_polya(60));
    assert(is_jordan_polya(72));
    assert(is_jordan_polya(120));
    assert(is_jordan_polya(128));
    assert(is_jordan_polya(240));
    assert(is_jordan_polya(256));
    assert(is_jordan_polya(1296));
    assert(is_jordan_polya(1440));
    assert(is_jordan_polya(2048));
    assert(is_jordan_polya(2880));
    assert(is_jordan_polya(4096));
    assert(is_jordan_polya(5184));
    assert(is_jordan_polya(5760));
    assert(is_jordan_polya(7680));
    assert(is_jordan_polya(7776));
    assert(is_jordan_polya(11520));
    assert(is_jordan_polya(13824));
    assert(is_jordan_polya(16384));
    assert(is_jordan_polya(18432));
    assert(is_jordan_polya(27648));
    assert(is_jordan_polya(30720));
    assert(is_jordan_polya(36864));
    assert(is_jordan_polya(40320));
    assert(is_jordan_polya(49152));
    assert(is_jordan_polya(51840));
    assert(is_jordan_polya(62208));
    assert(is_jordan_polya(65536));
    assert(is_jordan_polya(86400));
    assert(is_jordan_polya(92160));
    assert(is_jordan_polya(131072));
    assert(is_jordan_polya(155520));
    assert(is_jordan_polya(161280));
    assert(is_jordan_polya(221184));
    assert(is_jordan_polya(230400));
    assert(is_jordan_polya(279936));
    assert(is_jordan_polya(294912));
    assert(is_jordan_polya(311040));
    assert(is_jordan_polya(322560));
    assert(is_jordan_polya(331776));
    assert(is_jordan_polya(491520));
    assert(is_jordan_polya(518400));
    assert(!is_jordan_polya(611116));
    assert(is_jordan_polya(663552));
    assert(is_jordan_polya(725760));
    assert(is_jordan_polya(786432));
    assert(is_jordan_polya(921600));
    assert(is_jordan_polya(933120));
    assert(!is_jordan_polya(986501));
    assert(is_jordan_polya(1036800));
    assert(is_jordan_polya(1088640));
    assert(is_jordan_polya(1209600));
    assert(is_jordan_polya(1327104));
    assert(is_jordan_polya(1382400));
    assert(is_jordan_polya(1572864));
    assert(!is_jordan_polya(1862799));
    assert(is_jordan_polya(1866240));
    assert(is_jordan_polya(1990656));
    assert(is_jordan_polya(2949120));
    assert(!is_jordan_polya(3081048));
    assert(is_jordan_polya(3110400));
    assert(!is_jordan_polya(3141279));
    assert(!is_jordan_polya(3216500));
    assert(is_jordan_polya(3456000));
    assert(is_jordan_polya(3628800));
    assert(is_jordan_polya(4194304));
    assert(is_jordan_polya(4354560));
    assert(is_jordan_polya(4423680));
    assert(is_jordan_polya(4718592));
    assert(is_jordan_polya(5308416));
    assert(is_jordan_polya(5598720));
    assert(!is_jordan_polya(5669324));
    assert(!is_jordan_polya(5754817));
    assert(!is_jordan_polya(5770139));
    assert(is_jordan_polya(5898240));
    assert(!is_jordan_polya(5921694));
    assert(!is_jordan_polya(5942166));
    assert(is_jordan_polya(5971968));
    assert(!is_jordan_polya(6058700));
    assert(!is_jordan_polya(6525492));
    assert(!is_jordan_polya(6834583));
    assert(!is_jordan_polya(7255503));
    assert(!is_jordan_polya(7409119));
    assert(is_jordan_polya(7464960));
    assert(!is_jordan_polya(7670127));
    assert(is_jordan_polya(7962624));
    assert(!is_jordan_polya(7971438));
    assert(!is_jordan_polya(8293294));
    assert(is_jordan_polya(8294400));
    assert(is_jordan_polya(8388608));
    assert(!is_jordan_polya(8439436));
    assert(!is_jordan_polya(9085255));
    assert(!is_jordan_polya(9282930));
    assert(is_jordan_polya(9953280));
    assert(!is_jordan_polya(9996573));
    cout << "Jordan-Polya number tests passed!" << endl;
}

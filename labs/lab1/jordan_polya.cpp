#include <iostream>
#include <cassert>

using namespace std;

int factorial(int num){
    if (num==1)return 1;
    return (factorial(num-1)*num);
}
bool is_jordan_polya(int num) {
    int n=2;
    if (num==1)return true;
    while (factorial(n)<=num){
        if(num%factorial(n)==0 && is_jordan_polya(num/factorial(n)))return true;
        n++;
    }
    return false;
}
void test_jordan_polya() {
    assert(!is_jordan_polya(5));  // 5 is not a Jordan-Polya number
    assert(is_jordan_polya(92160));
    assert(is_jordan_polya(24));
    assert(is_jordan_polya(17280));
    assert(!is_jordan_polya(1998));
    assert(is_jordan_polya(72));
    assert(is_jordan_polya(1088640));
    cout << "Jordan-Polya number tests passed!" << endl;
}

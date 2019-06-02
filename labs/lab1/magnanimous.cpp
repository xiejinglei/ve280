#include <iostream>
#include <cassert>
#include <cmath>
#include <string>
using namespace std;
bool is_prime(int num){
    for (int i=2;i<=num/3;i++){
        if (num%i==0){ return false;}
    }
    return true;
}
bool is_magnanimous(int num) {
    if (num < 10) return false;
    for (int i=1;i<to_string(num).length();i++){
        if (!is_prime(num/(int)pow(10,i)+num%(int)pow(10,i)))return false;
    }
    return true;
}

void test_magnanimous() {
    assert(!is_magnanimous(15));  // 15 is not a magnanimous number
    assert(is_magnanimous(16));
    //assert(is_magnanimous(356));
    assert(!is_magnanimous(128));
    // TODO: Add more test cases
    cout << "Magnanimous number tests passed!" << endl;
}

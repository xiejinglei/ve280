#include <iostream>
#include <cassert>

using namespace std;

bool is_alternating(int num, int base); 
void test_alternating(); 

int main(){
    test_alternating();
}

bool is_alternating(int num, int base) {

    // convert to base b
    int new_number[10];
    int new_index = 0;
    while(num != 0){
        int digit = num % base;
        new_number[new_index] = digit;
        new_index++;

        num /= base;
    }

    //check for alternating even and odd
    for(int i=0; i<=new_index-2; ++i){
        if(new_number[i] % 2 == new_number[i+1] % 2){
            return false;
        }
    }

    return true;
}

void test_alternating() {
    assert(!is_alternating(24, 10));  // 24 is not an alternating number in base 10
    assert(is_alternating(21, 2));
    assert(!is_alternating(8, 3));
    assert(is_alternating(7, 3));
    assert(is_alternating(16, 3));
    assert(is_alternating(26, 5));
    assert(!is_alternating(31, 5));
    assert(is_alternating(82, 9));

    cout << "Alternating number tests passed!" << endl;
}

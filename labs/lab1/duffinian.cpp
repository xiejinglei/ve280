#include <iostream>
#include <cassert>
#include <vector>
using namespace std;

bool is_duffinian(int num) {
    int sum=0;
    vector<int>divisors;
    for (int i=1;i<=num;i++){
        if (num%i==0){
            sum+=i;
            divisors.push_back(i);
        }
    }
    for (int i=1;i<divisors.size();i++){
        if(sum%divisors[i]==0)return false;
    }
        return true;
}

void test_duffinian() {
    assert(!is_duffinian(6));  // 6 is not a Duffinian number
    assert(is_duffinian(35));
    assert(is_duffinian(2431));
    assert(!is_duffinian(114));
    // TODO: Add more test cases
    cout << "Duffinian number tests passed!" << endl;
}

#include <iostream>
#include <cassert>

using namespace std;

bool is_magnanimous(int num) {
    int num1=num,dig=0;
    while (num1>0){dig++;num1=num1/10;}
    for (int i=1;i<dig;i++){
        int a=0,b=0,num1=num,c=1;
        for (int j=1;j<=i;j++){a+=c*(num1%10);c=c*10;num1=num1/10;}
        c=1;
        for (int j=1;j<=dig-i;j++){b+=c*(num1%10);c=c*10;num1=num1/10;}
        int sum=a+b;
        for (int j=2;j<=floor(sqrt(sum));j++)
            if (sum%j==0) return false;
    }
    return true;
}




void test_magnanimous() {
    assert(!is_magnanimous(15));  // 15 is not a magnanimous number
    // TODO: Add more test cases
    cout << "Magnanimous number tests passed!" << endl;
}

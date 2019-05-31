#include <iostream>
#include <cassert>

using namespace std;

int SameSign(int num1, int num2){
	if(num1 % 2 == num2 % 2){return 1;}
	else {return 0;}
}
bool is_alternating(int num, int base) {
    // TODO: Your implementation here
    int flag = 0;
    int b = base;
    while(num>0){
    int temp1, temp2;	
    num /= b;    
    temp1 = num % b;
    num = num/b;
    temp2 = num % b;
    if (!SameSign(temp1,temp2)){flag=1;}
    else{continue;}

    }
    if(flag==1){cout << "is alternative" << endl;}
    else {cout << "not alternative"<<endl;}
	return false;
}

void test_alternating() {
    assert(!is_alternating(24, 10));  // 24 is not an alternating number in base 10
    // TODO: Add more test cases
      assert(!is_alternating(123454320, 10));
       assert(!is_alternating(10101,2));
    cout << "Alternating number tests passed!" << endl;
}

int main(){
test_alternating();
return 0;
}

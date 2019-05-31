#include "lab1.h"
#include <vector>


bool is_apocalypse(int num) {
    vector<int> vec(1,1);

    for (int i = 1; i <= num; i++) {
        for (int j = 0; j <= vec.size() - 1; vec[j] *= 2, j++);

        for (int j = 0; (vec.size() >= 2) && (j <= vec.size() - 2); j++) {
            vec[j + 1] += vec [j] / 10;
            vec[j] = vec [j] % 10;
        }

        if (vec[vec.size() - 1] >= 10) {
            vec.push_back(vec[vec.size()- 1] / 10);
            vec[vec.size() - 2] = vec[vec.size() - 2] % 10;
        }
    }

    //for (int i = 0; i <= vec.size() - 1; i++) cout << vec[vec.size() - 1 - i];
    //cout << endl;

    for (int i = 0; (vec.size() >3) && (i <= vec.size() - 3); i++) {
        if ((vec[i] == 6) && (vec[i + 1] == 6) && vec[i + 2] == 6) return true;
    }

    return false;

}

void test_apocalypse() {
    assert(!is_apocalypse(1));
    assert(is_apocalypse(157));
    assert(!is_apocalypse(200));
    assert(is_apocalypse(220));
    assert(is_apocalypse(931));
    assert(!is_apocalypse(1700));
    assert(is_apocalypse(1701));
    // TODO: Add more test cases
    cout << "Apocalypse number tests passed!" << endl;
}
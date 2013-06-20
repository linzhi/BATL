#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "algorithm.hpp"

#define N 10

using namespace std;
using namespace al;

int main(void)
{
    vector<int> test(N, 0);

    srand(time(NULL));
    for (vector<int>::iterator it = test.begin(); it != test.end(); it++) {
        *it = rand() % N; 
        cout << *it << " ";
    }
    cout << "\nAfter straight insert sort:\n";

    insert_sort(test.begin(), test.end());

    for (vector<int>::iterator it = test.begin(); it != test.end(); it++) {
        cout << *it << " ";
    }
    cout << "\n";

    return 0;
}

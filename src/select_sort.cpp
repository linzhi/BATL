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
    for (vector<int>::iterator i = test.begin(); i != test.end(); i++) {
        *i = rand() % N; 
        cout << *i << " ";
    }
    cout << "\nAfter simple selection sort:\n";

    select_sort(test.begin(), test.end());

    for (vector<int>::iterator i = test.begin(); i != test.end(); i++) {
        cout << *i << " ";
    }
    cout << "\n";

    return 0;
}

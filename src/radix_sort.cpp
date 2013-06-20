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
    cout << "\nAfter radix sort:\n";

    radix_sort(test, test.size());
    
    for (vector<int>::iterator it = test.begin(); it != test.end(); it++) {
        cout << *it << " ";
    }
    cout << "\n";

    return 0;
}


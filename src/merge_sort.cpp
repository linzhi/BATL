#include <iostream>
#include <algorithm>
#include <functional>
#include "algorithm.hpp"

#define N 10

using namespace std;

int main()
{
    vector<int> test(N, 0);

    srand(time(NULL));
    for (vector<int>::iterator it = test.begin(); it != test.end(); it++) {
        *it = rand() % N;
        cout << *it << " ";
    }

    cout << "\nAfter merge sort: \n";

    al::merge_sort(test.begin(), test.end());

    for (vector<int>::iterator it = test.begin(); it != test.end(); it++)
        cout << *it << " ";
    cout << "\n";

    return 0;
}

#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "algorithm.hpp"

#define N 10

using namespace std;

int main(int argc, char *argv[])
{
    vector<int> test(N, 0);

    srand(time(NULL));
    for (vector<int>::iterator it = test.begin(); it != test.end(); it++) {
        *it = rand() % N; 
        cout << *it << " ";
    }
    cout << "\nAfter heap sort: \n";

    al::heap_sort(test.begin(), test.end());

    for (vector<int>::iterator it = test.begin(); it != test.end(); it++) {
        cout << *it << " ";
    }
    cout << "\n";

    return 0;
}

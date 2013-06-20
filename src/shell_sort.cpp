#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "algorithm.hpp"

#define N 20

using namespace std;
using namespace al;

int main(int argc, char *argv[])
{
    vector<int> test(N, 0);

    srand(time(NULL));
    for (vector<int>::iterator it = test.begin(); it != test.end(); it++) {
        *it = rand() % N; 
        cout << *it << " ";
    }
    cout << "\nAfter shell sort:\n";

    shell_sort(test.begin(), test.end());

    for (vector<int>::iterator it = test.begin(); it != test.end(); it++) {
        cout << *it << " ";
    }
    cout << "\n";


    return 0;
}

#include <iostream>
#include <vector>
#include <cstdlib>
#include <cmath>
#include "algorithm.hpp"

#define N 10

using namespace std;

int main(void)
{
    int value;
    vector<int> test(N, 0);
    
    for (vector<int>::iterator it = test.begin(); it != test.end(); it++) {
        *it = rand() % N; 
        cout << *it << " ";
    }
    cout << "\nInput the search value: ";
    
    cin >> value;
    if (al::binary_search(test.begin(), test.end(), value) == true)
        cout << "found" << endl;
    else
        cout << "no found" << endl;

    return 0;
}

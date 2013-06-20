#include <vector>
#include <iostream>
#include "algorithm.hpp"

#define N 10

using namespace std;

int main(void)
{
    vector<int> test(N, 0);
    int value;
    
    srand(time(NULL));
    for (vector<int>::iterator it = test.begin(); it != test.end(); it++) {
        *it = rand() % N; 
        cout << *it << " ";
    }
    cout << "\nInput the search value:\n";

    cin >> value;
    if (al::hash_search(test.begin(), test.end(), value) == true) {
        cout << "found" << endl;
    }
    else {
        cout << "no found" << endl;
    }

    return 0;
}

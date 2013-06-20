#include <iostream>
#include <cstdlib>
#include "algorithm.hpp"

using namespace std;
using namespace al;

int main(void)
{
    Graph demo(10);
    int value;

    demo.add_edge(1, 2); demo.add_edge(1, 3); demo.add_edge(1, 4);
    demo.add_edge(2, 5); demo.add_edge(2, 6); demo.add_edge(4, 7);
    demo.add_edge(4, 8); demo.add_edge(5, 9); demo.add_edge(7, 10);

    cout << "Please input search value between (0, 10]:\n";
    while (cin >> value) {
        cout << "Depth first search starting from root vertex\n";
        if (demo.DFS(1, value) != 0)
            cout << "Found \n";
        else
            cout << "No found\n";
    }

    return 0;
}






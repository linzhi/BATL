#include <iostream>
#include "algorithm.hpp"

using namespace std;
using namespace al;

int main(void)
{
    init_graph(graph);
    print_graph(graph);

    cout << "minmum spanning tree:\n";

    prim(graph);

    return 0;
}

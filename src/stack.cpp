#include <iostream>
#include "algorithm.hpp"

int main(void)
{
    al::stack<int> test_in;
    test_in.push(1);
    test_in.push(2);
    test_in.push(3);
    test_in.push(4);
    test_in.pop();
    test_in.pop();

    std::cout << "the top elem of stack_in:" << test_in.top() << std::endl;
    std::cout << "the size of stack_in:" << test_in.size() << std::endl;

    al::stack<double> test_double;
    test_double.push(1.0);
    test_double.push(2.0);
    test_double.push(3.0);
    test_double.push(4.0);
    test_double.push(5.0);
    test_double.pop();
    test_double.pop();

    std::cout << "the top elem of stack_double:" << test_double.top() << std::endl;
    std::cout << "the size of stack_double:" << test_double.size() << std::endl;

    return 0;
}

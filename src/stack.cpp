#include <iostream>
#include "algorithm.hpp"

int main(void)
{
    al::stack<int> stack_int;
    stack_int.push(1);
    stack_int.push(2);
    stack_int.push(3);
    stack_int.push(4);
    stack_int.pop();
    stack_int.pop();

    std::cout << "the top elem of stack_int:" << stack_int.top() << std::endl;
    std::cout << "the size of stack_int:" << stack_int.size() << std::endl;

    al::stack<double> stack_double;
    stack_double.push(1.0);
    stack_double.push(2.0);
    stack_double.push(3.0);
    stack_double.push(4.0);
    stack_double.push(5.0);
    stack_double.pop();
    stack_double.pop();

    std::cout << "the top elem of stack_double:" << stack_double.top() << std::endl;
    std::cout << "the size of stack_double:" << stack_double.size() << std::endl;

    return 0;
}

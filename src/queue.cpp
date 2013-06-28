#include <iostream>
#include "algorithm.hpp"

int main(void)
{
    al::queue<int> queue_int;
    queue_int.push(1);
    queue_int.push(2);
    queue_int.push(3);
    queue_int.push(4);
    queue_int.pop();
    queue_int.pop();
    queue_int.push(5);

    std::cout << "the front elem of queue_int:" << queue_int.front() << std::endl;
    std::cout << "the back elem of queue_int:" << queue_int.back() << std::endl;
    std::cout << "the size of queue_int:" << queue_int.size() << std::endl;

    al::queue<double> queue_double;
    queue_double.push(1.0);
    queue_double.push(2.1);
    queue_double.push(3.2);
    queue_double.push(4.3);
    queue_double.push(5.4);
    queue_double.pop();
    queue_double.pop();
    queue_double.push(6.5);

    std::cout << "the front elem of queue_double:" << queue_double.front() << std::endl;
    std::cout << "the back elem of queue_double:" << queue_double.back() << std::endl;
    std::cout << "the size of queue_double:" << queue_double.size() << std::endl;

    return 0;
}


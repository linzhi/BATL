#ifndef __STACK_HPP__
#define __STACK_HPP__

#include <vector>
#include <stdexcept>

namespace al {

template <class T>
class stack {
public:
    bool empty() const;
    int size() const;
    T top() const;
    void push(const T&);
    void pop();

private:
    std::vector<T> elems;
};

template <class T>
bool stack<T>::empty() const
{
    return elems.empty();
}

template <class T>
int stack<T>::size() const
{
    return elems.size();
}

template <class T>
T stack<T>::top() const
{
    if (elems.empty()) {
        throw std::out_of_range("stack::pop()::empty stack"); 
    }
    return elems.back();
}

template <class T>
void stack<T>::push(const T& item)
{
    elems.push_back(item);
}

template <class T>
void stack<T>::pop()
{
    if (elems.empty()) {
        throw std::out_of_range("stack::pop()::empty stack"); 
    }

    elems.pop_back();
}

}

#endif




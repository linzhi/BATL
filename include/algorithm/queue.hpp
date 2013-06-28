#ifndef __QUEUE_HPP__
#define __QUEUE_HPP__

#include <deque>

namespace al {

template <class T>
class queue {
public:
    bool empty() const;
    int size() const;
    const T& front() const;
    const T& back() const;
    void push(const T&);
    void pop();

private:
    std::deque<T> elems;
};

template <class T>
bool queue<T>::empty() const
{
    return elems.empty();
}

template <class T>
int queue<T>::size() const
{
    return elems.size();
}

template <class T>
const T& queue<T>::front() const
{
    if (elems.empty()) {
        throw std::out_of_range("queue::front()::empty queue"); 
    }

    return elems.front();
}

template <class T>
const T& queue<T>::back() const
{
    if (elems.empty()) {
        throw std::out_of_range("queue::back()::empty queue"); 
    }

    return elems.back();
}

template <class T>
void queue<T>::push(const T& item)
{
    elems.push_back(item);
}

template <class T>
void queue<T>::pop()
{
    elems.pop_front();
}

}

#endif

#ifndef __BUBBLE_SORT_HPP__
#define __BUBBLE_SORT_HPP__

namespace al {

template <typename __input_iterator>
static void bubble_sort(__input_iterator __first, __input_iterator __last)
{
    typename std::iterator_traits<__input_iterator>::value_type temp;

    if (__first == __last)
        return ;

    for (__input_iterator i = __last; i != __first; i--) {
        for (__input_iterator j = __first + 1; j != i; j++) {
            if (*(j - 1) > *j) {
                std::swap(*(j - 1), *j);
            }
        }
    }
}

}

#endif

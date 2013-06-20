#ifndef SELECT_SORT_HPP
#define SELECT_SORT_HPP

#include <algorithm>

namespace al {

template <typename __input_iterator>
static void select_sort(__input_iterator __first, __input_iterator __last)
{
    __input_iterator k;

    if (__first == __last)
        return ;

    for (__input_iterator i = __first; i != __last; i++) {
        k = i; 
        for (__input_iterator j = i + 1; j != __last; j++) {
            if (*k > *j)
                k = j;
        }
        if (k != i) {
            std::swap(*k, *i);
        }
    }
}

}

#endif

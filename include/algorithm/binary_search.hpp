#ifndef __BINARY_SEARCH_HPP__
#define __BINARY_SEARCH_HPP__

#include <algorithm>

namespace al {

template <typename __input_iterator, typename __input_value>
static bool binary_search(__input_iterator __first, __input_iterator __last, __input_value value)
{
    typename std::iterator_traits<__input_iterator>::difference_type len = std::distance(__first, __last);

    int low = 0;
    int high = len - 1;

    sort(__first, __last);

    while (low <= high) {
        int mid = (low + high) / 2;

        if (*(__first + mid) == value) {
            return true; 
        }
        else if (*(__first + mid) > value) {
            high = mid - 1; 
        }
        else {
            low = mid + 1; 
        }
    }
    
    return false;
}

}

#endif


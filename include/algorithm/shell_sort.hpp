#ifndef __SHELL_SORT_HPP__
#define __SHELL_SORT_HPP__

namespace al {

template <typename __input_iterator>
static void shell_sort(__input_iterator __first, __input_iterator __last)
{
    typename std::iterator_traits<__input_iterator>::difference_type len = __last - __first;

    if (__first == __last)
        return ;

    for (int step = len / 2; step > 0; step /= 2) {
        for (int i = step; i < len; i++) {
            for (int j = i - step; j >= 0 && *(__first + j) > *(__first + j + step); j -= step) {
                std::swap(*(__first + j), *(__first + j + step));
            }
        }
    }
}

}

#endif


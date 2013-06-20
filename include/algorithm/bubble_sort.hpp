#ifndef __BUBBLE_SORT_HPP__
#define __BUBBLE_SORT_HPP__

namespace al {

template <typename __input_iterator>
static void bubble_sort(__input_iterator __first, __input_iterator __last)
{
    typename std::iterator_traits<__input_iterator>::value_type temp;

    if (__first == __last)
        return ;

    for (__input_iterator i = __first; i != __last; i++) {
        temp = 0; 
        for (__input_iterator j = i + 1; j != __last; j++) {
            if (*i > *j) {
                temp = *j;
                *j = *i;
                *i = temp;
            }
        }
    }
}

}

#endif

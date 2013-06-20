#ifndef INSERT_SORT_HPP
#define INSERT_SORT_HPP

namespace al {

template <typename __input_iterator>
static void insert_sort(__input_iterator __first, __input_iterator __last)
{
    __input_iterator i, j;
    typename std::iterator_traits<__input_iterator>::value_type temp;

    if (__first == __last)
        return ;

    for (i = __first + 1; i != __last; i++) {
        temp = *i;
        for (j = i - 1; j != __first - 1 && *j > temp; j--) {
            *(j + 1) = *j;
        }
        *(j + 1) = temp;
    }
}

}

#endif



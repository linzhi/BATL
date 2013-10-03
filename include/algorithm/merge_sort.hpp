#ifndef __MERGE_SORT_HPP__
#define __MERGE_SORT_HPP__

namespace al {

template <typename __input_iterator, typename __order_func>
static void __merge(__input_iterator __first, __input_iterator __last, __order_func __order)
{
    if (__last - __first > 1) {
        __input_iterator __mid = __first + (__last - __first) / 2;
        __merge(__first, __mid, __order);
        __merge(__mid, __last, __order);
        std::inplace_merge(__first, __mid, __last, __order);
    }
}

template <typename __input_iterator>
void merge_sort(__input_iterator __first, __input_iterator __last)
{
    __merge(__first, __last, std::less<typename std::iterator_traits<__input_iterator>::value_type>());
}

}

#endif

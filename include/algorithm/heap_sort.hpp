#ifndef __HEAP_SORT_HPP__
#define __HEAP_SORT_HPP__

namespace al {

template <typename __input_iterator>
static void __heap_adjust(__input_iterator __first, __input_iterator __last, int i)
{
    typename std::iterator_traits<__input_iterator>::difference_type len = __last - __first;
    int lchild = 2 * i;
    int rchild = 2 * i + 1;
    int max_root = i;

    if (i <= len / 2) {
        if (lchild <= len && *(__first + lchild - 1) > *(__first + max_root - 1)) {
            max_root = lchild; 
        }
        if (rchild <= len && *(__first + rchild - 1) > *(__first + max_root - 1)) {
            max_root = rchild; 
        }
        if (max_root != i) {
            std::swap(*(__first + i - 1), *(__first + max_root - 1));
            __heap_adjust(__first, __last, max_root);
        }
    }
}

template <typename __input_iterator>
static void heap_sort(__input_iterator __first, __input_iterator __last)
{
    typename std::iterator_traits<__input_iterator>::difference_type len = __last - __first;

    // build heap
    for (int i = len / 2; i >= 1; i--)
        __heap_adjust(__first, __last, i);

    // delete max root
    for (int i = len; i >= 1 ; i--) {
        std::swap(*__first, *(__first + i - 1));
        __last--;
        __heap_adjust(__first, __last, 1);
    }
}

}

#endif


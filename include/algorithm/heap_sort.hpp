#ifndef __HEAP_SORT_HPP__
#define __HEAP_SORT_HPP__

#include <vector>

namespace al {

static void __heap_adjust(std::vector<int>& array, int i, int size)
{
    int lchild = 2 * i;
    int rchild = 2 * i + 1;
    int max = i;
    if (i <= size / 2) {
        if (lchild <= size && array[lchild] > array[max]) {
            max = lchild; 
        }
        if (rchild <= size && array[rchild] > array[max]) {
            max = rchild; 
        }
        if (max != i) {
            std::swap(array[i], array[max]);
            __heap_adjust(array, max, size);
        }
    }
}

static void __build_heap(std::vector<int>& array, int size)
{
    for (int i = size / 2; i >= 1; i--)
        __heap_adjust(array, i, size);
}

static void heap_sort(std::vector<int>& array, int size)
{
    __build_heap(array, size);
    for (int i = size; i >= 1; i--) {
        std::swap(array[1], array[i]);
        __heap_adjust(array, 1, i - 1);
    }
}

}

#endif



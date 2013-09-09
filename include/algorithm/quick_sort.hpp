#ifndef __QUICK_SORT_HPP__
#define __QUICK_SORT_HPP__

#include <vector>

namespace al {

static int __adjust_array(std::vector<int>& array, int l, int r)
{
    int i = l;
    int j = r;
    int x = array[i];
    
    while (i < j) {
        while (i < j && array[j] >= x)
            j--;
        if (i < j) {
            array[i] = array[j];
            i++;
        }
        
        while (i < j && array[i] < x)
            i++;
        if (i < j) {
            array[j] = array[i];
            j--;
        }
    }
    array[i] = x;
    return i;
}

static int __random_adjust_array(std::vector<int>& array, int l, int r)
{
    srand(time(NULL));
    
    int i = rand() % (r - l + 1) + l;
    int x;
    x = array[i];
    std::cout << x << " | ";
    array[i] = array[l];
    array[l] = x;
    return __adjust_array(array, l, r);
}

static void quick_sort(std::vector<int>& array, int l, int r)
{
    if (l < r) {
        int i = __adjust_array(array, l, r);
        quick_sort(array, l, i - 1);
        quick_sort(array, i + 1, r);
    }
}

static void random_quick_sort(std::vector<int>& array, int l, int r)
{
    if (l < r) {
        int i = __random_adjust_array(array, l, r);
        random_quick_sort(array, l, i - 1);
        random_quick_sort(array, i + 1, r);
    }
}

}

#endif


#ifndef __RADIX_SORT_HPP__
#define __RADIX_SORT_HPP__

#include <vector>

namespace al {

int __max_bit(std::vector<int>& array, int n)
{
    int d = 1;
    int p = 10;
    for (int i = 0; i < n; i++) {
        while (array[i] >= p) {
            p *= 10;
            d++;
        }
    }
    
    return d;
}

static void radix_sort(std::vector<int>& array, int n)
{
    int d = __max_bit(array, n);
    int *tmp = new int[n];
    int *count = new int[10];
    int k = 0;
    int radix = 1;
    
    for (int i = 1; i <= d; i++) {
        for (int j = 0; j < 10; j++)
            count[j] = 0;
        for (int j = 0; j < n; j++) {
            k = (array[j] / radix) % 10;
            count[k]++;
        }
        for (int j = 1; j < 10; j++)
            count[j] = count[j-1] + count[j];
        for (int j = n-1; j >= 0; j--) {
            k = (array[j] / radix) % 10;
            tmp[count[k]-1] = array[j];
            count[k]--;
        }
        for (int j = 0; j < n; j++)
            array[j] = tmp[j];
        radix = radix * 10;
    }

    delete [] tmp;
    delete [] count;
}

}

#endif


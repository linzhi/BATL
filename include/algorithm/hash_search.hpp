#ifndef __HASH_SEARCH_HPP__
#define __HASH_SEARCH_HPP__

#define HASH_LEN 137

#include <vector>

namespace al {

template <typename __input_iterator, typename __input_value>
static bool hash_search(__input_iterator __first, __input_iterator __last, __input_value value)
{
    std::vector<int> hash_table(HASH_LEN);

    for (__input_iterator i = __first; i != __last; i++) {
        typename std::iterator_traits<__input_iterator>::value_type hash_address = *i % HASH_LEN;

        while (hash_table.at(hash_address) != 0)
            hash_address = (++hash_address) % HASH_LEN;

        hash_table.at(hash_address) = *i;
    }

    typename std::iterator_traits<__input_iterator>::value_type value_hash_address = value % HASH_LEN;

    while (hash_table.at(value_hash_address) != 0 && hash_table.at(value_hash_address) != value)
        value_hash_address = (++value_hash_address) % HASH_LEN;
    
    if (hash_table.at(value_hash_address) == 0)
        return false;
    else 
        return true;
}

}

#endif


#pragma once
#include <cstdint>
#include <utility>

// Generic Selection Sort Algorithm Implementation
template<typename Array_t, typename _Predicate>
void selectSort(Array_t arr, std::size_t cant, _Predicate&& pred){
    for (std::size_t i = 0; i < cant - 1; ++i) {
        std::size_t min_idx = i;
        for (std::size_t j = i + 1; j < cant; ++j) {
            if (pred(arr[j],arr[min_idx]))
                min_idx = j;
        }
        std::swap(arr[i], arr[min_idx]);
    }
}
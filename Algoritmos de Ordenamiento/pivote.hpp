#pragma once
#include <cstdint>
#include <utility>

template<typename Array_t, typename _Predicate>
void quickSort(
    Array_t arr, 
    std::size_t cant, 
    std::size_t base,
    std::size_t top,
    _Predicate&& pred
){
    // Stop condition
    if(base >= top) return;

    auto pivot = arr[base];
    std::size_t i = base + 1;
    std::size_t j = top;

    while(true){
        // Increment i until pred
        while(i <= j && pred(arr[i], pivot)) i++;
        // Decrement j until pred
        while(i <= j && pred(pivot, arr[j])) j--;
        if(i > j) break;
        std::swap(arr[i], arr[j]);
    }

    std::swap(arr[base], arr[j]);

    quickSort(arr, cant, base, j - 1, pred);
    quickSort(arr, cant, j + 1, top, pred);
}

template<typename Array_t, typename _Predicate>
void quickSort(
    Array_t arr, 
    std::size_t cant, 
    _Predicate&& pred
){ quickSort(arr, cant, 0, cant-1, std::forward<_Predicate>(pred)); }
#pragma once
#include <cstdint>
#include <utility>

// Generic Bubble Algorithm Implementation
template<typename Array_t, typename _Predicate>
void bubbleSort(Array_t arr, std::size_t cant, _Predicate&& pred){
    for (std::size_t i = 0; i < cant; ++i) {
        for (std::size_t j = i+1; j < cant; ++j) {
            if( pred(arr[i], arr[j]) ) 
                std::swap(arr[i], arr[j]);
        }
    }
}

// Generic Bubble Algorithm Implementation
template<typename Array_t, typename _Predicate>
void bubbleSort2(Array_t arr, std::size_t cant, _Predicate&& pred){
    std::size_t iterations{0};
    bool forIsNotRun{ false };
    std::size_t end = cant-1;
    while( !forIsNotRun ){
        forIsNotRun = true;
        for(std::size_t i=0; i < (end - iterations); ++i){
            if( pred(arr[i], arr[j]) ) std::swap(arr[i], arr[j]);
            forIsNotRun=false;
        }
        iterations++;
    }
}

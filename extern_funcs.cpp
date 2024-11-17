#include "extern_funcs.h"

int partition(int* arr, int low, int high) {
    int pivot = arr[high];

    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    int temp = arr[i+1];
    arr[i+1] = arr[high];
    arr[high] = temp;

    return i + 1;
}

void quick_sort(int* arr, int low, int high) { // Алгоритм быстрой сортировки O(N*log(N)) в среднем случае
    if (low < high) {
        int pi = partition(arr, low, high);

        quick_sort(arr, low, pi - 1);
        quick_sort(arr, pi + 1, high);
    }
}

void sort(int* arr, const size_t N) {
    quick_sort(arr, 0, N - 1);
}

void print_arr(int* arr, const size_t N) { // Вывод элементов массива О(N)
    for (size_t i = 0; i < N; i++) {
        if (i == 0)
            std::cout << '[';
        else
            std::cout << ", ";
        std::cout << ' ' << arr[i];
    }
    std::cout << ']';
}
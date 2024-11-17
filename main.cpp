#include "extern_funcs.h"

void fill_array(int* arr, const size_t N) { // «аполнение массива случайными числами O(N)
    srand(time(0));
    for (size_t i = 0; i < N; i++)
        arr[i] = rand()%256;
}

int main() {
    size_t ARRAY_SIZE = 10;
    int* array = new int [ARRAY_SIZE];
    fill_array(array, ARRAY_SIZE);

    sort(array, ARRAY_SIZE);

    print_arr(array, ARRAY_SIZE);

    return 0;
}
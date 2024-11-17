#include "extern_funcs.h"

int main() {
    const size_t ARRAY_SIZE = 10;
    int array[ARRAY_SIZE] = {20, 1, 6, 128, 123, 52, 545, 6, 46, -1 };

    sort(array, ARRAY_SIZE);

    print_arr(array, ARRAY_SIZE);

    return 0;
}
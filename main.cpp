#include <iostream>
using namespace std;

void sort(int* arr, const size_t N) { // Простой алгоритм сортировки по возрастанию О(N^2)
    for (size_t i = 0; i < N; i++)
        for (size_t j = 0; j < N; j++)
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
}

void print_arr(int* arr, const size_t N) { // Вывод элементов массива О(N)
    for (size_t i = 0; i < N; i++)
        cout << arr[i] << ' ';
}

int main() {
    const size_t ARRAY_SIZE = 10;
    int array[ARRAY_SIZE] = {20, 1, 6, 128, 123, 52, 545, 6, 46, -1 };

    sort(array, ARRAY_SIZE);

    print_arr(array, ARRAY_SIZE);

    return 0;
}
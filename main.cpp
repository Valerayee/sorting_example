#include <iostream>
#include <random>
using namespace std;

void sort(int* arr, const size_t N) { // Алгоритм сортировки пузырьком О(N^2)
    for (size_t i = 0; i < N - 1; i++)
        for (size_t j = i + 1; j < N; j++)
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

void fill_array(int* arr, const size_t N) { // Заполнение массива случайными числами O(N)
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
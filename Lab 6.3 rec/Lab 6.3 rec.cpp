#include <iostream>
#include <vector>
#include <cstdlib> 
#include <ctime>


template <typename T>
void createArray(std::vector<T>& arr, int size) {
    arr.clear();
    for (int i = 0; i < size; i++) {
        T num = rand() % 100; 
        arr.push_back(num);
    }
}

template <typename T>
void printArray(const std::vector<T>& arr) {
    for (const T& num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

template <typename T>
T recursiveSum(const std::vector<T>& arr, size_t index) {
    if (index == 0) {
        return arr[index];
    }
    else {
        return arr[index] + recursiveSum(arr, index - 1);
    }
}

int main() {
    int size = 10;
    std::vector<int> arr;

    srand(static_cast<unsigned>(time(nullptr)));

    createArray(arr, size);
    std::cout << "masive:" << std::endl;
    printArray(arr);

    int sum = recursiveSum(arr, arr.size() - 1); 
    std::cout << "sum masive elements (recursive): " << sum << std::endl;

    return 0;
}

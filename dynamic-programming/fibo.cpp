#include <iostream>
#include <vector>

int fibonacci(int array[], int n) {
    if (array[n] > 0) {
        return array[n];
    }

    array[n] = fibonacci(array, n - 1) + fibonacci(array, n - 2);
    return array[n];
}

int initializeArray(int n) {
    int array[n];
    array[0] = 1;
    array[1] = 1;

    for (size_t i = 2; i <= n; i++) {
        array[i] = -1;
    }

    return fibonacci(array, n);
}
int main() {
    std::cout << "A";
    int n = 19;
    int result = initializeArray(n); 
    std::cout << "Result para n = " << n << " -> " << result << std::endl;
}



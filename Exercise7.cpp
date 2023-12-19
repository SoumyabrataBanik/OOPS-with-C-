# include <bits/stdc++.h>
# include <vector>
# include <string>

using namespace std;

void print(int [], int);

int *apply_all(int [], int, int [], int);

int main () {

    const size_t array1_size {5};
    const size_t array2_size {3};

    int array1[] {1, 2, 3, 4, 5};
    int array2[] {10, 20, 30};

    cout << "\nArray 1: ";
    print(array1, array1_size);

    cout << "\nArray 2: ";
    print(array2, array2_size);

    int *result = apply_all(array1, array1_size, array2, array2_size);
    constexpr size_t result_size {array1_size * array2_size};

    cout << "\nResult: ";
    print(result, result_size);

    cout << endl;
    return 0;
}

void print(int array[], int size) {
    for (auto i {0}; i < size; i++) {
        cout << array[i] << ' ';
    }
}

int *apply_all(int array1[], int size1, int array2[], int size2) {
    
    int dex = 0;
    auto *result = new int [size1 * size2];

    for (auto index {0}; index < size2; index++) {
        for (auto ind {0}; ind < size1; ind++) {
            result[dex] = array1[ind] * array2[index];
            dex++;
        }
    }

    return result;

    delete [] result;
}
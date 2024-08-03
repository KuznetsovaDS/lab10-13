#include <iostream>
using namespace std;

template <typename T>
T average(T* array, int size) {
    T sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += array[i];
    }
    return sum / size;
}

int main() {
    system("chcp 1251");
    
    int int_array[] = { 1, 2, 3, 4, 5 };
    int int_size = sizeof(int_array) / sizeof(int_array[0]);
    cout << "Среднее арифметическое массива int " << average(int_array, int_size) << endl;

    long long_array[] = { 10L, 20L, 30L, 40L, 50L };
    int long_size = sizeof(long_array) / sizeof(long_array[0]);
    cout << "Среднее арифметическое массива long " << average(long_array, long_size) << endl;

    double double_array[] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
    int double_size = sizeof(double_array) / sizeof(double_array[0]);
    cout << "Среднее арифметическое массива double " << average(double_array, double_size) << endl;

    char char_array[] = { 1, 2, 3, 4, 5 }; 
    int char_size = sizeof(char_array) / sizeof(char_array[0]);
    cout << "Среднее арифметическое массива char " << static_cast<int>(average(char_array, char_size)) << endl;

    return 0;
}
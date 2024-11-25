#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void init_mas(int a[], const int k);
void print(int a[], int size);
int sum_elements(int mas[], const int n);

template <typename T>
void print_template(T mas[], const int n);
template <typename T>
void init_mas_template(T mas[], const int n);
template <typename T>
T sum_elements_template(T mas[], const int n);

int main() {
    srand((unsigned)time(NULL));
    const int k = 24;
    int a[k];

    cout << "<Iterative method>" << endl;
    init_mas(a, k);
    print(a, k);
    cout << "\nSum: " << sum_elements(a, k) << endl;

    cout << "\n<Template function>" << endl;
    init_mas_template(a, k);
    print_template(a, k);
    cout << "Sum: " << sum_elements_template(a, k) << endl;

    return 0;
}

void init_mas(int a[], const int k) {
    for (int i = 0; i < k; i++) {
        a[i] = -50 + rand() % (65 + 1);
    }
}

void print(int a[], int size) {
    for (int i = 0; i < size; i++) {
        cout << setw(4) << a[i];
    }
    cout << endl;
}

int sum_elements(int mas[], const int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += pow(mas[i],2);
    }
    return sum;
}


template <typename T>
T sum_elements_template(T mas[], const int n) {
    T sum = 0;
    for (int i = 0; i < n; i++) {
        sum += pow(mas[i], 2);
    }
    return sum;
}

template <typename T>
void init_mas_template(T a[], const int k) {
    for (int i = 0; i < k; i++) {
        a[i] = -50 + rand() % (65 + 1);
    }
}

template <typename T>
void print_template(T a[], const int size) {
    for (int i = 0; i < size; i++) {
        cout << setw(4) << a[i];
    }
    cout << endl;
}

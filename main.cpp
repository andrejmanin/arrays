#include <iostream>

using namespace std;

void task_1() {
    const int size = 10, sm_size = 5;
    int arr[size] = {1, 5, 3, 2, 7, 4, 1, 0, -3, 5}, arr_1[sm_size], arr_2[sm_size];
    for(int i = 0; i < sm_size; i++) {
        arr_1[i] = arr[i];
        arr_2[i] = arr[i + 5];
    }

    for(int i = 0; i < 5; i++) {
        cout << arr_1[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < 5; i++) {
        cout << arr_2[i] << " ";
    }
}

void task_2() {
    const int size = 5;
    int arr[size], arr_1[size] = {1, 4, -6, 3, 7}, arr_2[size] = {4, 6, -1, 0, -5};

    for(int i = 0; i < size; i++) {
        arr[i] = arr_1[i] + arr_2[i];
        cout << arr[i] << " ";
    }
}

int main() {
    task_2();

    return 0;
}
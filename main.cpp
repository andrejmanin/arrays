#include <iostream>

using namespace std;

void task_1() {
    const int size = 10;
    int current_size = size;
    int arr[size] = {1, 2, 0, 4, 0, 6, 7, 0, 0, 10};

    //delete element by index
    for(int i = 0; i < size; i++) {
        if(arr[i] == 0) {
            for(int j = i; j < current_size; j++) {
                arr[j] = arr[j + 1];

            }
            current_size--;
            i = 0;
        }
    }
    for(int i = current_size; i < size; i++) {
        arr[i] = -1;
    }
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

void task_2() {
    const int size_1 = 5, size_2 = 10;
    int arr_1[size_1] = {1, -6, 3, -4, 5}, arr_2[size_1] = {6, -1, 0, 9, -4}, arr[size_2];
    int index = 0;

    for(int i = 0; i < size_1; i++) {
        if(arr_1[i] > 0) {
            arr[index] = arr_1[i];
            index++;
        }
        if(arr_2[i] > 0) {
            arr[index] = arr_2[i];
            index++;
        }
    }
    for(int i = 0; i < size_1; i++) {
        if(arr_1[i] == 0) {
            arr[index] = arr_1[i];
            index++;
        }
        if(arr_2[i] == 0) {
            arr[index] = arr_2[i];
            index++;
        }
    }
    for(int i = 0; i < size_1; i++) {
        if(arr_1[i] < 0) {
            arr[index] = arr_1[i];
            index++;
        }
        if(arr_2[i] < 0) {
            arr[index] = arr_2[i];
            index++;
        }
    }
    for(int i = 0; i < size_2; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    task_2();

    return 0;
}

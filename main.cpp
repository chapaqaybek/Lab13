#include <iostream>
using namespace std;

int main() {
    // Problem 1
    // int arr[5] = {10, 20, 30, 40, 50};
    // int* ptr = arr;
    //
    // for (int i = 0; i < 5; i++) {
    //     cout << *(ptr + i) << " ";
    // }
    // return 0;

    // Problem 2
    // int arr[6] = {2, 4, 6, 8, 10, 12};
    // int* ptr = arr;
    //
    // for (int i = 0; i < 6; i++) {
    //     *(ptr + i) *= 3;
    // }
    //
    // for (int i = 0; i < 6; i++) {
    //     cout << *(ptr + i) << " ";
    // }
    //
    // return 0;

    // Problem 3
    // int arr[4] = {5, 10, 15, 20};
    // int* ptr = arr;
    // cout << "arr[2] =" << ptr[2] << endl;
    // cout << "(arr + 2)= " << *(ptr + 2) << endl;
    //
    // return 0;

    // Problem 4
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr + 4;

    for (int i = 0; i < 5; i++) {
        cout << *(ptr - i) << endl;
    }
    return 0;




}

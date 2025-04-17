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
    // int arr[5] = {1, 2, 3, 4, 5};
    // int* ptr = arr + 4;
    //
    // for (int i = 0; i < 5; i++) {
    //     cout << *(ptr - i) << " ";
    // }
    //
    // return 0;

    // // Problem 5
    //     int arr[3] = {1, 2, 3};
    //     int* ptr = arr;
    //
    //     ptr = ptr + 1;
    //
    //     printf("*ptr = %d\n", *ptr); // Output: 2
    //
    //     return 0;

    // Problem 6
        // int arr[4] = {10, 20, 30, 40};
        // int* ptr = arr;
        // for (int i = 0; i < 4; i++) {
        //     printf("Value: %d Address: %p\n", *(ptr + i), (ptr + i));
        // }
        //
        // return 0;

    // Problem 7
    // int arr[7] = {11, 4, 7, 18, 5, 2, 9};
    // int* ptr = arr;
    //
    // for (int i = 0; i < 7; i++) {
    //     if (*(ptr + i) % 2 == 0) {
    //      printf("%d ", *(ptr + i));
    //     }
    // }
    //
    // return 0;


    // Problem 8
    // int matrix[2][3] = {1, 2, 3, 4, 5, 6};
    //
    // int* ptr = &matrix[0][0];
    //
    // for (int i = 0; i < 6; i++) {
    //     printf("%d", *(ptr + i));
    // }
    //
    // return 0;

    // Problem 9
    // int a = 7, b = 14, c = 21;
    // int* ptrs[3] = {&a, &b, &c};
    //
    // for (int i = 0; i < 3; i++) {
    //     printf("%d ", *ptrs[i]);
    // }
    //
    // return 0;

    // Problem 10
    //     int arr[5] = {9, 3, 7, 1, 6};
    //     int* ptr = arr; // Pointer to the first element
    //     for (int i = 0; i < 5 - 1; i++) {
    //         for (int j = 0; j < 5 - i - 1; j++) {
    //             int* a = ptr + j;
    //             int* b = ptr + j + 1;
    //
    //         if (*a > *b) {
    //                 int temp = *a;
    //                 *a = *b;
    //                 *b = temp;
    //             }
    //         }
    //     }
    //     for (int i = 0; i < 5; i++) {
    //         printf("%d", *(ptr + i));
    //     }
    //
    //     return 0;

    // Problem 11
    // const char *suit[4] = {"Hearts", "Diamonds", "Clubs", "Spades"};
    //
    // for (int i = 0; i < 4; i++) {
    //     cout << suit[i] << " ";
    // }

    // Problem 12
    // const char *suit[6] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
    //
    // for (int i = 0; i < 6; i++) {
    //     cout << *(*(suit + i) + 1) << " ";
    // }

    // problem 13
    // int deck[4][13] = {0};
    //
    // const char *suits[4] = {"Hearts", "Diamonds", "Clubs", "Spades"};
    // const char *faces[13] = {
    //     "Ace", "Two", "Three", "Four", "Five", "Six", "Seven",
    //     "Eight", "Nine", "Ten", "Jack", "Queen", "King"
    // };
    //
    // deck[0][0] = 1;
    // deck[3][12] = 1;
    //
    // for (int suit = 0; suit < 4; suit++) {
    //     for (int face = 0; face < 13; face++) {
    //         if (deck[suit][face] == 1) {
    //             cout << faces[face] << " of " << suits[suit] << endl;
    //         }
    //     }
    // }

    // Problem 14
    // int deck[4][13] = {0};
    // const char* suits[] = {"Hearts", "Diamonds", "Clubs", "Spades"};
    // const char* faces[] = {
    //     "Ace", "Two", "Three", "Four", "Five", "Six", "Seven",
    //     "Eight", "Nine", "Ten", "Jack", "Queen", "King"
    // };
    //
    // srand(time(NULL));
    //
    // for (int card = 1; card <= 52; card++) {
    //     int row, col;
    //     do {
    //         row = rand() % 4;
    //         col = rand() % 13;
    //     } while (deck[row][col] != 0);
    //     deck[row][col] = card;
    // }
    // for (int value = 1; value <= 52; value++) {
    //     for (int suit = 0; suit < 4; suit++) {
    //         for (int face = 0; face < 13; face++) {
    //             if (deck[suit][face] == value) {
    //                 printf("%s of %s\n", faces[face], suits[suit]);
    //             }
    //         }
    //     }
    // }
    //
    // return 0;

    // Problem 15
    // void greet() {
    //     cout << "Hello from greet()" << endl;
    // }
    //
    // void bye() {
    //     cout << "Goodbye from bye()" << endl;
    // }
    //
    // int main() {
    //     void (*fptr)();  // Declare function pointer
    //
    //     fptr = greet;
    //     fptr();          // Call greet via pointer
    //
    //     fptr = bye;
    //     fptr();          // Call bye via pointer
    //
    //     return 0;

    // Problem 16




}

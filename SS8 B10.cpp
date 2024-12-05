#include <stdio.h>

int main() {
    int arr[] = {1, 5, 2, 3, 23, 5, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int count[100] = {0}; 
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;;
    }
    int max_count = 0;
    for (int i = 0; i < 100; i++) {
        if (count[i] > max_count) {
            max_count = count[i];
        }
    }
    for (int i = 0; i < 100; i++) {
        if (count[i] == max_count) {
            printf("%d ", i);
        }
    }
    return 0;
}


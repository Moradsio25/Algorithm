#include <iostream>
using namespace std;

int main() {
    int A[] = {4,2,2,8,3,3,1};
    int n = 7;


    int max = A[0];
    for (int i = 1; i < n; i++) {
        if (A[i] > max)
            max = A[i];
    }
    int COUNT[max] = {0};

    for (int i = 0; i < n; i++) {
        COUNT[A[i]]++;
    }
    for (int i = 1; i <= max; i++) {
        COUNT[i] = COUNT[i] + COUNT[i - 1];
    }

    int OUTPUT[7];

    for (int i = n - 1; i >= 0; i--) {
        OUTPUT[COUNT[A[i]] - 1] = A[i];
        COUNT[A[i]]--;
    }
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << OUTPUT[i] << " ";
    }

    return 0;
}

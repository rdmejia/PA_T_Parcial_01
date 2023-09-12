#include "Ejercicio02.h"
#include <iostream>
using namespace std; 

int Ejercicio02::rob(int houses[], int n)
{
    int arr[4];
    std::fill_n(arr, 4, -1);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> houses[i];
    }
    arr[0] = houses[0];
    arr[1] = max(houses[0], houses[1]);

    for (int i = 2; i < n; i++) {
        arr[i] = max(arr[i - 1], arr[i - 2] + houses[i]);
    }
    cout << arr[n - 1] << endl;
    return 0;
}

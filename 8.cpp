//Maximum Elements in an Array
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int maximum = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > maximum)
            maximum = arr[i];
    }

    cout << "Maximum element = " << maximum;

    return 0;
}
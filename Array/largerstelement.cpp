#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int largest = arr[0];
    for (int j = 1; j < n; j++) {
        if (arr[j] > largest) {
            largest = arr[j];
        }
    }

    cout << "The largest is: " << largest << endl;
    return 0;
}

#include <iostream>
#include <climits>
using namespace std;

class Array {
    int arr[100], n;

public:
    void input() {
        cout << "Enter number of elements: ";
        cin >> n;

        cout << "Enter elements: ";
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
    }

    void secondLargest() {
        if (n < 2) {
            cout << "Second largest element does not exist.";
            return;
        }

        int max = arr[0];
        int secondmax = INT_MIN;

        for (int i = 1; i < n; i++) {
            if (arr[i] > max) {
                secondmax = max;
                max = arr[i];
            }
            else if (arr[i] > secondmax && arr[i] != max) {
                secondmax = arr[i];
            }
        }

        if (secondmax == INT_MIN)
            cout << "Second largest element does not exist.";
        else
            cout << "Second largest element = " << secondmax << endl;
    }
};

int main() {
    Array obj;
    obj.input();
    obj.secondLargest();
    return 0;
}
#include <iostream>
#include<climits>
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

    void secondMin() {

        if (n < 2) {
            cout << "Second minimum does not exist.";
            return;
        }
        int min = arr[0];
        int secondMin=INT_MAX;

        for (int i = 1; i < n; i++) {
            if (arr[i] < min) {
                secondMin=min;
                min = arr[i];
            }
            else if(arr[i]<secondMin && arr[i]!=min){
                secondMin=arr[i];
            }
        }

         if (secondMin == INT_MAX)
            cout << "Second minimum does not exist.";
        else
            cout << "Second minimum element = " << secondMin << endl;
    }
    
};

int main() {
    Array obj;

    obj.input();
    obj.secondMin();

    return 0;
}
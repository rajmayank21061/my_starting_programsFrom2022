#include <iostream>
#include <vector>
using namespace std;

vector<int> SumofArrays(vector<int> arr1, vector<int> arr2) {
    int carry = 0;
    vector<int> newarray;
    int i = arr1.size() - 1;
    int j = arr2.size() - 1;

    while (i >= 0 || j >= 0 || carry > 0) {
        int sum = carry;
        if (i >= 0) {
            sum += arr1[i];
            i--;
        }
        if (j >= 0) {
            sum += arr2[j];
            j--;
        }
        carry = sum / 10;
        sum = sum % 10;
        newarray.insert(newarray.begin(), sum);
    }

    return newarray;
}

int main() {
    vector<int> arr1 = {3, 8, 4};
    vector<int> arr2 = {1, 4, 6, 3, 9};
    vector<int> result = SumofArrays(arr1, arr2);

    cout << "Sum of arrays: ";
    for (int num : result) {
        cout << num;
    }
    cout << endl;

    return 0;
}

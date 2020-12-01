#include <iostream>
using namespace std;
int main() {
    int n;
    int area;
    int h;
    cout << "Size = ";
    cin >> n;
    int a[n];
    cout << "Data in the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (a[j] < a[i]) {
                h = a[j];
            }
            else {
                h = a[i];
            }
            if (h * (j - i) > area) {
                area = h * (j - i);
            }
        }
    }
    cout << "Area = " << area << endl;
}

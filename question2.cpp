#include <iostream>
using namespace std;

int oddSum(int a, int b) {
    if (a > b) return 0; 

    if (a % 2 == 1) { 
        return a + oddSum(a + 1, b);
    } else {
        return oddSum(a + 1, b);
    }
}

int main() {
    int a = 1, b = 10;
    cout << "Sum of odd numbers from " << a << " to " << b << " is " << oddSum(a, b) << endl;
}
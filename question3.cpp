#include <iostream>
using namespace std;

bool isPowerOfTwo(int n) {
    if (n == 1) return true;
    if (n <= 0 || n % 2 != 0) return false; 
    return isPowerOfTwo(n / 2); 
}

int main() {
    int num = 16;
    cout << num << " is " << (isPowerOfTwo(num) ? "a power of 2" : "not a power of 2") << endl;
}
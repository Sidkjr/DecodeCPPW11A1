#include <iostream>
using namespace std;

void IncDec(int n) {
    if (n <= 0) return;
    
    cout << n << " ";
    IncDec(n - 1); 
    cout << n << " "; 
}

int main() {
    int n = 5;
    IncDec(n);
    cout << endl;
}
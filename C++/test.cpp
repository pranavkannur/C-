#include <iostream>
using namespace std;
int forLoop(int low, int high) {
        // Optimized using arithmetic series formula: sum = n*(n+1)/2
        // Sum from low to high = sum(1 to high) - sum(1 to low-1)
        long long sum_high = (long long)high * (high + 1) / 2;
        long long sum_low_minus_1 = (low - 1LL) * low / 2;
        return sum_high - sum_low_minus_1;
}
int main() {
    
    
    cout << forLoop(1, 5) << endl;
    cout << forLoop(3, 7) << endl;
    return 0;
}
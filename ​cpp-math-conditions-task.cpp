#include <iostream>
using namespace std;

int main() {
    long long n, a, b;
    cin >> n >> a >> b;
    if (n <= a)
        cout << 1 << endl;
    else if (a <= b)
        cout << -1 << endl;
    else
        //((n-a)/(a-b))+1
        cout << ((n - a + a - b - 1) / (a - b)) + 1 << endl;
}

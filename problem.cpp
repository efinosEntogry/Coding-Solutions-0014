#include <iostream>

using namespace std;

double power(int x, int y) {
    if (y == 0) return 1;
    if (y < 0) return 1 / power(x, -y);
    return x * power(x, y-1);
}

int main() {

    cout << power(5,-2);

    return 0;
}

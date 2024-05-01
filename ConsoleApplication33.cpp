#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int n = 10;
    int sum = n * (n + 1) / 2;
    cout << "Сумма чисел от 1 до 10: " << sum << endl;
    return 0;
}
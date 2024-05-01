#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int n = 8;
    int sum = n * (n + 1) / 2;
    cout << "Сумма чисел от 1 до 8: " << sum << endl;
    return 0;
}
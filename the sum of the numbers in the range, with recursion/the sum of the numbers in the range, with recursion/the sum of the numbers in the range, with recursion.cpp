#include <iostream>
using namespace std;

int sum(int a, int b)
{
    if (a == b)
    {
        return a;
    }
    return a + sum(a + 1, b);
}

int main()
{
    setlocale(LC_ALL, "ru");
    int a, b;
    cout << "Введите a: ";
    cin >> a;
    cout << "Введите b: ";
    cin >> b;

    int result = sum(a, b);
    cout << "Сумма чисел от " << a << " до " << b << " = " << result << endl;

    return 0;
}
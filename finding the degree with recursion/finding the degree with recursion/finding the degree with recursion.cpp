#include <iostream>
using namespace std;

int power(int base, int exponent)
{
    if (exponent == 0)
    {
        return 1;
    }
    else
    {
        return base * power(base, exponent - 1);
    }
}

int main()
{
    setlocale(LC_ALL, "ru");
    int base, exponent;

    cout << "Введите основание: ";
    cin >> base;
    cout << "Введите степень: ";
    cin >> exponent;
    cout << base << " в степени " << exponent << " равно " << power(base, exponent) << endl;

    return 0;
}

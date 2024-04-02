#include <iostream>
using namespace std;

void printStars(int n)
{
    if (n <= 0)
    {
        return;
    }

    cout << "*";
    printStars(n - 1);
}

int main()
{
    setlocale(LC_ALL, "ru");
    int n;

    cout << "Введите число звёзд: ";
    cin >> n;

    printStars(n);

    return 0;
}
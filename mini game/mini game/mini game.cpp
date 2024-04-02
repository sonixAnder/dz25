#include <iostream>
#include <Windows.h>
using namespace std;

void moveDisk(int n, char source, char destination, char auxiliary)
{
    if (n == 1)
    {
        cout << "Переместите диск 1 из " << source << " к " << destination << endl;
        return;
    }

    moveDisk(n - 1, source, auxiliary, destination);
    cout << "Переместите диск " << n << " из " << source << " к " << destination << endl;
    moveDisk(n - 1, auxiliary, destination, source);
}

int main()
{
    setlocale(LC_ALL, "ru");
    int n = 3; // количество дисков
    moveDisk(n, 'A', 'C', 'B');
    cout << "-------------------------------" << endl;
    Sleep(5000);
    cout << "Конец игры и конец света." << endl;
    Sleep(5000);
    cout << "Запущен процесс уничтожения." << endl;
    Sleep(3500);
    cout << "Запущен процесс уничтожения.." << endl;
    Sleep(3500);
    cout << "Запущен процесс уничтожения..." << endl;
    Sleep(4500);
    cout << "Уничтожение пульсаров, спутников, всего живого." << endl;
    Sleep(5000);
    cout << "Конец света настал. Всё стёрто из этой вселенной. Осталась лишь пустота." << endl;
    Sleep(5000);

    string a = "\n\t\t\t\t\t\tИгра окончена. ";
    int time = 100;
    for (int i = 0; i < a.length(); i++)
    {
        Sleep(time);
        cout << a[i];
    }
    return 0;
}

#include <iostream>
#include <cstdlib>
using namespace std;

int findMinSumIndex(const int arr[], int index = 0, int minSumIndex = 0, int minSum = INT_MAX)
{
    if (index > 90)
    {
        return minSumIndex;
    }

    int sum = 0;
    for (int i = index; i < index + 10; i++)
    {
        sum += arr[i];
    }

    if (sum < minSum)
    {
        minSum = sum;
        minSumIndex = index;
    }

    return findMinSumIndex(arr, index + 1, minSumIndex, minSum);
}

int main()
{
    setlocale(LC_ALL, "ru");
    int arr[100];

    // Заполнение массива случайными числами
    for (int i = 0; i < 100; i++)
    {
        arr[i] = rand() % 100 + 1;
        cout << arr[i] << " ";
    }

    // Вызов функции для нахождения позиции минимальной суммы
    int minSumIndex = findMinSumIndex(arr);
    cout << "\nПозиция начала последовательности из 10 чисел с минимальной суммой: " << minSumIndex << endl;

    return 0;
}

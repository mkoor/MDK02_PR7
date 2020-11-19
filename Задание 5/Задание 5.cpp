using namespace std;
#include <iostream>
#include <ctime>

int main()
{
    setlocale(LC_ALL, "Russian");

    const int n = 5, m = 5;
    srand(time(NULL));
    int a[n][m];

    for (int i = 0; i < n; ++i) {  // Выводим на экран строку i
        for (int j = 0; j < m; ++j)
        {
            a[i][j] = rand() % 5;
            cout.width(3);
            cout << a[i][j] << " ";

        }
        cout << endl; // Строка завершается символом перехода на новую строку
    }

    int k = 0;

    for (int i = 0; i < n; i++)//Нахождение максимального элемента
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] % 2 != 0)
            {
                k++;
            }
        }
    }

    cout << "Количество нечетных чисел = " << k << endl;

}
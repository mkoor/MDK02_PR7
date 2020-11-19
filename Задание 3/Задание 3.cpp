using namespace std;
#include <iostream>
#include <ctime>

int main()
{
    setlocale(LC_ALL, "Russian");

    const int n = 3, m = 3;
    srand(time(NULL));
    int a[n][m];

    for (int i = 0; i < n; ++i) {  // Выводим на экран строку i
        for (int j = 0; j < m; ++j)
        {
            a[i][j] = rand() % 30;
            cout.width(3);
            cout << a[i][j] << " ";
        }
        cout << endl; // Строка завершается символом перехода на новую строку
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == j) sum += a[i][i];
        }
    }
    cout << "Сумма элементов главной диагонали = " << sum << endl;

}
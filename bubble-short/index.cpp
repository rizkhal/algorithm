/**
 * Based on:
 * https://www.geekxh.com/1.7.%E6%8E%92%E5%BA%8F%E7%B1%BB%E9%A2%98%E7%9B%AE/701.html#_02%E3%80%81%E4%BB%8E-%E6%8F%92%E5%85%A5%E6%8E%92%E5%BA%8F-%E8%AF%B4%E8%B5%B7
 */

#include <iostream>

using namespace std;

void bubble(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n - i - 1; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp; 
            }
        }
    }
}

int main(void)
{
    int array[100], n, i, j;
    cout << "Masukan banyak elemen: ";
    cin >> n;
    for (i = 0; i < n; ++i)
    {
        cout << "Masukan Nilai: ";
        cin >> array[i];
    }

    bubble(array, n);
    cout << "Hasil pengurutan: \n";
    for (i = 0; i < n; ++i)
    {
        cout << array[i] << "\n";
    }

    return 0;
}

#include <iostream>

using namespace std;

int octalToDecimal(int n)
{
    int dec_value = 0;

    int base = 1;

    int temp = n;

    while(temp) {
        int last_digit = temp % 10;
        temp /= 10;

        dec_value += last_digit * base;

        base = base * 8;
    }

    return dec_value;
}

int main(void)
{
    int n;
    cout << "Masukan bilangan octal: ";
    cin >> n;

    cout << octalToDecimal(n) << endl;

    return 0;
}

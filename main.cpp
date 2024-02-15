#include <iostream>
#include <string>
#include <bitset>
using namespace std;

int countSetBits(int valueBit)
{
    int count = 0;
    for (int i = 0; i < 32; ++i)
    {
        count += (valueBit & 1);
        valueBit >>= 1;
    }
    return count;
}
template <typename T>
int countOnes(T value) // void не требует return value
{
    if (value / 2 != 0)
    {
        countOnes(value / 2);
    }
    cout << value % 2;
    return value;
}
int main()
{
    setlocale(LC_ALL, "ru");
    int input_value;
    cout << "Введите значение для перевода DEC --> BIN: ";
    cin >> input_value;
    cout << endl;
    cout << "Ваше значение DEC(" << input_value <<") - BIN --> ";
    countOnes(input_value);
    cout <<" --> "<< countSetBits(input_value)<<" bit";
    cout << endl;
    return 0;
}

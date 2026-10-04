#include <iostream>
using namespace std;

int main()
{
    // задача Begin2 - визначення кількості повних тон і залишку кілограмів
    int M, tons, kgRemainder;
    cout << "Enter mass M (kg): ";
    cin >> M;
    tons = M / 1000;
    kgRemainder = M % 1000;
    cout << "Tons = " << tons << endl;
    cout << "Remaining kg = " << kgRemainder << endl;

    // задача Begin6 - визначення десятків і одиниць двозначного числа
    int N, tens, units;
    cout << "Enter two-digit number: ";
    cin >> N;
    tens = N / 10;
    units = N % 10;
    cout << "Tens digit = " << tens << endl;
    cout << "Units digit = " << units << endl;

    // задача Begin16 - перестановка цифр десятків і одиниць тризначного числа
    int K, hundreds, tensDigit, unitsDigit, result;
    cout << "Enter three-digit number: ";
    cin >> K;
    hundreds = K / 100;
    tensDigit = (K / 10) % 10;
    unitsDigit = K % 10;
    result = hundreds * 100 + unitsDigit * 10 + tensDigit;
    cout << "Result after swapping tens and units = " << result << endl;

    return 0;
}

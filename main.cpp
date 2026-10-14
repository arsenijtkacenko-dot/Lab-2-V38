#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Integer6
    int A;
    cout << "Vvedite dvuznachnoe chislo A: ";
    cin >> A;
    int tens = A / 10;
    int units = A % 10;
    cout << "Desyatki: " << tens << endl;
    cout << "Edinitsy: " << units << endl;

    // Boolean2
    int B;
    cout << "Vvedite tseloe chislo B: ";
    cin >> B;
    bool isOdd = (B % 2 != 0);
    cout << "Chislo B neparnoe: " << (isOdd ? "true" : "false") << endl;

    // Math16
    double x;
    cout << "Vvedite x: ";
    cin >> x;
    double numerator = pow(log(2*x + cos(37.0)), 3);
    double denominator = pow(sin(x*x), 3) + sqrt(fabs(1 - 2*cos(x) + cos(2*x)));
    double y = numerator / denominator;
    cout << "y = " << y << endl;

    return 0;
}

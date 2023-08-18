#include <iostream>
#include <string>
using namespace std;

int main() {
    int a = 10;
    short b = 20;
    long c = 30;
    long long d = 40;
    cout << "Integers: " << a << ", " << b << ", " << c << ", " << d << endl;

    float e = 3.14f;
    double f = 3.141592;
    long double g = 3.14159265358979L;
    cout << "Floats: " << e << ", " << f << ", " << g << endl;

    char h = 'a';
    wchar_t i = L'b';
    char16_t j = u'c';
    char32_t k = U'd';
    cout << "Characters: " << h << ", " << i << ", " << j << ", " << k << endl;

    bool l = true;
    bool m = false;
    cout << "Booleans: " << l << ", " << m << endl;

    string n = "Hello, world!";
    cout << "String: " << n << endl;

    return 0;
}

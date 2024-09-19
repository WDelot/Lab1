#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

class Functions {
private:
    float x, y, z, b, a;

public:
    Functions(float x, float y, float z) : x(x), y(y), z(z) {}
    int factorial(int n) {
        int result = 1;
        for (int i = 2; i <= n; i++) {
            result *= i;
        }
        return result;
    }


    float calculateB() {
        b = 1 - (x + y) / pow(abs(z), 0.34) + pow(y, 2) / 6 + pow(z, 3) / exp(x - y) / (z + y); /*120 + exp(x - y) / (z + y);*/
        return b;
    }

    float calculateA() {
        a = log(abs(pow((y - sqrt(abs(x * x - b))) * (y - x * x) / (z + 4 * y * y), 2. / 3.)));

        return a;
    }
};

    int main() {
        SetConsoleCP(1251);
        SetConsoleOutputCP(1251);

        float x = 0.48 * 7;
        float y = 0.47 * 7;
        float z = -1.32 * 7;

        Functions function(x, y, z);
        float b = function.calculateB();
        float a = function.calculateA();
        cout << " Завдання 1 " << endl;
        cout << " a = " << a << endl;
        cout << " b = " << b << endl;
        cout << " Завдання 2 " << endl;
        for (float x = -1; x <= 1; x += 0.2) {
            Functions altfunction(x, y, z);
            float b = altfunction.calculateB();
            float A = altfunction.calculateA();
            cout << " a = " << a << endl;
            cout << " b = " << b << endl;
        }
        return 0;
    }
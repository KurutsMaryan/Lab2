#include <iostream>
#include <cmath>

using namespace std;

   int main() {
 
  
cout << "\n____Задание 3 N12______"<< endl;
const double pi = 3.141592; // визначення дійсної константи
double x, num, denom, sin2, y; // декларація дійсних змінних
// введення данних
cout << "Real argument x = ";
cin >> x;
    // Обчислюємо чисельник
   double numerator = tan(abs(2 * pow(x, 2) + 5 * x - 31.15)) + log10(abs(x - 2.5));

    // Обчислюємо знаменник
    double denominator = pow(abs(pow(sin(x), 3) + log10(abs(pow(x, 2) - 2.5)) / 3), 1.0 / 3.0);

    // Обчислюємо остаточний результат
    y = numerator / denominator;

    cout << "Результат: y = " << y << endl;

    return 0;
}


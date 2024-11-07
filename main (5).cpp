#include <iostream>
using namespace std;

int main() {
     cout << "\n______Integer4._____" << endl;
    int A, B;
    cout << "Введіть довжину відрізка A (A > B): ";
    cin >> A;
    cout << "Введіть довжину відрізка B: ";
    cin >> B;
    // Перевірка, що A > B
    if (A > B) {
        int count = A / B; // Цілочисельне ділення
        cout << "Кількість відрізків B, що помістяться на відрізку A: " << count << endl;
    } else {
        cout << "Помилка: A має бути більше за B." << endl;
    }

      cout << "\n____Boolean 17______"<< endl;
    int number;
    cout << "Введіть число: ";
    cin >> number;

    // Перевірка, чи число є тризначним і непарним
    bool result = (number >= 100 && number <= 999) && (number % 2 != 0);

    // Виведення результату
    cout << result << endl;

    return 0;
}


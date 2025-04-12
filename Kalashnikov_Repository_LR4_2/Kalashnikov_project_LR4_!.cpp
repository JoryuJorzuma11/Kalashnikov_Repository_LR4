#include <iostream>
using namespace std;

// Прототипы методов
void calculateRemainder();
void calculateQuotient();
void displayMenu();

int main() {
    int choice;
    
    do {
        displayMenu();
        cout << "Выберите пункт меню: ";
        cin >> choice;
        
        switch(choice) {
            case 1:
                calculateRemainder();
                break;
            case 2:
                calculateQuotient();
                break;
            case 3:
                cout << "Выход из программы." << endl;
                break;
            default:
                cout << "Неверный выбор. Попробуйте снова." << endl;
        }
    } while(choice != 3);
    
    return 0;
}

// Метод для вычисления остатка от деления разности A и B на C
void calculateRemainder() {
    // 
}

// Метод для вычисления целой части от деления A на сумму B и C
void calculateQuotient() {
    // Реализация будет добавлена позже
}

// Метод для отображения меню
void displayMenu() {
    cout << "\nМеню:" << endl;
    cout << "1. Найти остаток от деления разности чисел А и В на число С" << endl;
    cout << "2. Найти целую часть от деления числа А на сумму чисел В и С" << endl;
    cout << "3. Выход" << endl;
}S
//ws2wwjwu//
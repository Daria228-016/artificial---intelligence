# artificial---intelligence
#include <iostream>
#include "AI.h"
#include "FileUtils.h"

int main() 
{
    setlocale(LC_ALL, "RUS");
    AI ai; //экземпляр класса AI
    FileUtils fileUtils; //экземпляр класса FileUtils


    // Загрузка данных из файла
    ai.loadData(fileUtils.readData("data.txt"));

    int choice;
    do {
        cout << "1. Обучение\n";
        cout << "2. Тестирование\n";
        cout << "0. Выход\n";
        cout << "Выберите действие: ";
        cin >> choice;

        if (choice == 1)
        {
            int dividend, divisor, result; //делимое, делитель, результат
            cout << "Введите делимое: ";
            cin >> dividend;
            cout << "Введите делитель: ";
            cin >> divisor;
            cout << "Введите ожидаемый результат (остаток): ";
            cin >> result;

            // Обучение AI на введенных данных
            ai.train(dividend, divisor, result);
            fileUtils.writeData(ai.getTrainingData(), "data.txt");
        }
        else if (choice == 2)
        {
            int dividend, divisor;
            cout << "Введите делимое: " << endl;
            cin >> dividend;
            cout << "Введите делитель: " << endl;
            cin >> divisor;

            // Тестирование AI
            int predictedResult = ai.predict(dividend, divisor); // Получаем предсказанный результат
            cout << "Предсказанный результат: " << predictedResult << endl;
        }
    } while (choice != 0);
    // Цикл продолжается, пока пользователь не выберет выход (0)
    return 0;
}

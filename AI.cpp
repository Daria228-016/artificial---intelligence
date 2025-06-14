#include "AI.h"

void AI::train(int dividend, int divisor, int expectedResult)  // Добавляем обучающие данные в вектор
{
    trainingData.push_back(make_tuple(dividend, divisor, expectedResult));
}

int AI::predict(int dividend, int divisor)  // Простой алгоритм: возвращаем остаток от деления
{
   
    return dividend % divisor; // возвращаем остаток от деления
}

void AI::loadData(const vector<tuple<int, int, int>>& data) // Загружаем данные в вектор
{
    trainingData = data;
}

vector<tuple<int, int, int>> AI::getTrainingData() 
{
    return trainingData;// Возвращаем обучающие данные
}

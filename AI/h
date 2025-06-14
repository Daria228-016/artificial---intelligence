#pragma once
#ifndef AI_H
#define AI_H

#include <vector>
#include <tuple>
using namespace std;
class AI 
{
public:
    void train(int dividend, int divisor, int expectedResult);// Метод для обучения
    int predict(int dividend, int divisor);// Метод для предсказания результата
    void loadData(const vector<tuple<int, int, int>>& data);// Метод для загрузки данных
    vector<tuple<int, int, int>> getTrainingData();// Метод для получения обучающих данных

private:
    vector<tuple<int, int, int>> trainingData; //Вектор для хранения обучающих данных( делимое, делитель, остаток)
};

#endif // AI_H

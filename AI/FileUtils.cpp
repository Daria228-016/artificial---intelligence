#include "FileUtils.h"
#include <fstream>
#include <sstream>

void FileUtils::writeData(const vector<tuple<int, int, int>>& data, const string& filename) 
{
   ofstream outFile(filename);
    for (const auto& entry : data)
    {
        outFile << get<0>(entry) << " "
            << get<1>(entry) << " "
            << get<2>(entry) << "\n";
    }
}
// Вектор для хранения считанных данных
vector<tuple<int, int, int>> FileUtils::readData(const std::string& filename) 
{
    vector<tuple<int, int, int>> data;

    ifstream inFile(filename);
    if (inFile.is_open()) 
    {
        int dividend, divisor, result;
        while (inFile >> dividend >> divisor >> result) // Читаем данные из файла построчно
        {
            data.push_back(make_tuple(dividend, divisor, result));// Добавляем считанные данные в вектор
        }
        inFile.close();
    }
    return data;
}

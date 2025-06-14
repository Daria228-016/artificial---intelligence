#ifndef FILEUTILS_H
#define FILEUTILS_H

#include <vector>
#include <tuple>
#include <string>
using namespace std;

class FileUtils 
{
public:
    // Метод для записи данных в файл
    void writeData(const vector<tuple<int, int, int>>& data, const string& filename);
    // Метод для чтения данных из файла
    vector<tuple<int, int, int>> readData(const string& filename);
};

#endif // FILEUTILS_H

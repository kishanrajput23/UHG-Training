#include <iostream>
using namespace std;


struct SeriesRow {
    int number;
    string text;
};

void printSeries(const SeriesRow series[], int size) {
    for (int i = 0; i < size; i++) {
        cout << series[i].number << "\t" << series[i].text << std::endl;
    }
}

int main() {
    SeriesRow series[] = {
        {1, "s"},
        {2, "s\t\t\tt"},
        {3, "s\t\t\ti"},
        {4, "s\t\t\tt"},
        {5, "s"},
        {6, "s\t\t\tt\t\ti"},
        {7, "s"},
        {8, "s\t\t\tt"},
        {9, "s\t\t\ti"},
        {10, "s\t\tt"}
    };

    printSeries(series, sizeof(series) / sizeof(series[0]));

    return 0;
}

#include <iostream>

using namespace std;

void findMinMax(const int scores[], int size, int* min, int* max) {
    *min = scores[0]; 
    *max = scores[0];  

    for (int i=1; i<size; i++) {
        if (scores[i] < *min) {
            *min = scores[i];
        }
        if (scores[i] > *max) {
            *max = scores[i];
        }
    }
}

int main() {
    int scores[] = {45, 78, 92, 62, 84, 71};
    int size = sizeof(scores) / sizeof(scores[0]);

    int minScore, maxScore;
    findMinMax(scores, size, &minScore, &maxScore);

    cout << "Minimum Score: " << minScore << endl;
    cout << "Maximum Score: " << maxScore << endl;

    return 0;
}

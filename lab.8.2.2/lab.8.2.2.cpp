#include <iostream>
using namespace std;
const int ARRAY_SIZE = 20;
int countElementsNotInSecondArray(double firstArray[], double secondArray[]) {
    int count = 0;
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        bool found = false;
        for (int j = 0; j < ARRAY_SIZE; ++j) {
            if (firstArray[i] == secondArray[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            count++;
        }
    }
    return count;
}
int main() {
    setlocale(LC_ALL, "ukr");
    double firstArray[ARRAY_SIZE];
    double secondArray[ARRAY_SIZE];
    cout << "введiть елементи першого масиву:\n";
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        cin >> firstArray[i];
    }
    cout << "введiть елементи другого масиву:\n";
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        cin >> secondArray[i];
    }
    int count = countElementsNotInSecondArray(firstArray, secondArray);
    cout << "кiлькiсть елементiв першого масиву, якi не входять у другий: " << count << endl;

    return 0;
}



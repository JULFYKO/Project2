#include <iostream>
#include <ctime>
#include <cstdlib>

using std::cout;
using std::endl;

void filln(int arr[], int size, int max) {
    std::srand(static_cast<unsigned int>(std::time(0)));
    for (int i = 0; i < size; i++) {
        int v = std::rand() % max + 1;
        bool flag = false;
        while (!flag) {
            flag = true;
            for (int j = 0; j < i; j++) {
                if (arr[j] == v) {
                    flag = false;
                    break;
                }
            }
            if (!flag) {
                v = std::rand() % max + 1;
            }
        }
        arr[i] = v;
    }
}

void print(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int const size = 10;
    int max = 50;
    int arr[size];
    filln(arr, size, max);
    print(arr, size);

    return 0;
}

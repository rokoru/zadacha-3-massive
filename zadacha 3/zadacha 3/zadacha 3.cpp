
#include <iostream>
#include <cstdlib>

int main()
{
    int* a = new int[50];
    int* b = new int[50];

    for (int i = 0; i < 50; ++i) {
        a[i] = rand() % 30;
    }

    for (int i = 0; i < 50; ++i) {
        b[i] = rand() % 50;
    }

    int* c = new int[50];

    for (int i = 0; i < 50; ++i) {
        c[i] = a[i] + b[i];
        std::cout << c[i] << std::endl;
    }
}


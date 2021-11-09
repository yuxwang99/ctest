#include <malloc.h>
#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
    char* buf = (char *)malloc(1024 * 1024 * 1024);
    //char* buf2 = (char *)malloc(1024 * 1024 * 1024);
    if (buf == 0) {
        printf("Malloc failed!\n");
        return 0;
    }
    int i, j, k;
    for (i = 0; i < 1024; i++)
        for (j = 0; j < 1024; j++)
            for (k = 0; k < 1024; k++)
                buf[i * 1024 * 1024 + j * 1024 + k] = i + j + k;
 
    free(buf);

    std::cout << "finish\n";
    while (1);
    return 0;
}
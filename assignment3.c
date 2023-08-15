#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Highestbase();  //fn fir highest base
int main() {
    int randominteger = 50;
    int lowervalue = (int)5000000000;
    int uppervalue = (int)9999999999;
    int highestbasefrequency[10] = {0};  // Array for store frequency
    srand(time(0));
    for (int i = 0; i < randominteger; i++) {
        int randominteger = (rand() % (uppervalue - lowervalue + 1)) + lowervalue;
        int highestbase = Highestbase(randominteger);
        highestbasefrequency[highestbase - 1]++;
        printf("The Highest Base of %d is %d.\n", randominteger, highestbase);
    }
    printf("\nHighest Base Frequency:\n");
    for (int i = 0; i < 10; i++) {
        printf("Base %d: %d times\n", i + 1, highestbasefrequency[i]);
    }           // for highest base frequency counting
    return 0;
}
int Highestbase(int number) {
    int highestBase = 0;
    while (number > 0) {
        int digit = number % 10;
        if (digit > highestBase) {
            highestBase = digit;
        }
        number /= 10;
    }
    return highestBase + 1;
}

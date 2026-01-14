#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "calculator.h"

int main(int argc, char *argv[]) {

    // carré
    if (argc == 3 && strcmp(argv[1], "car") == 0) {
        double r = car(atof(argv[2]));
        printf("%lf", r);
        return 0;
    }

    // add / sub / mul / div
    if (argc == 4) {
        double a = atof(argv[2]);
        double b = atof(argv[3]);

        if (strcmp(argv[1], "add") == 0) {
            printf("%lf", _add(a, b));
            return 0;
        }
        if (strcmp(argv[1], "sub") == 0) {
            printf("%lf", _sub(a, b));
            return 0;
        }
        if (strcmp(argv[1], "mul") == 0) {
            printf("%lf", _mul(a, b));
            return 0;
        }
        if (strcmp(argv[1], "div") == 0) {
            printf("%lf", _div(a, b));
            return 0;
        }
    }

    printf("Erreur de parametres");
    return 0;
}

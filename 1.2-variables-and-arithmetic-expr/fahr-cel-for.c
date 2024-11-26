#include <stdio.h>

int main() {

    int fohr;

    for (fohr = 0; fohr <= 300; fohr = fohr + 20) {
        printf("%3d %6.1f\n", fohr, (5.0/9.0)*(fohr-32));
    }

    return 0;
}

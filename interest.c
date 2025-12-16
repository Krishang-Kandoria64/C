#include <stdio.h>

float interest(int x) {
    if (x == 0)
        return 0.0;

    return (interest(x - 1) + 1000.0) * (1.0 + 0.08 / 12.0);
}

int main() {
    printf("%.10f\n", interest(12));
    return 0;
}

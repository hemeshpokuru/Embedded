#include <REGX52.h>
delay() {
    unsigned int R4, R3;
    for (R4 = 18; R4 > 0; R4--) {
        for (R3 = 255; R3 > 0; R3--) {}
    }
}
main() {
    while (1) {
        P2_0 = 1;
        delay();
        P2_0 = 0;
        delay();
    }
}
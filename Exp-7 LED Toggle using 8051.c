#include <REGX52.h>
delay() {
    unsigned int R4, R3;
    for (R4 = 10; R4 > 0; R4--) {
        for (R3 = 255; R3 > 0; R3--) {}
    }
}
main() {
    while (1) {
        P2 = 0x55;
        delay();
        P2 = 0xAA;
        delay();
    }
}
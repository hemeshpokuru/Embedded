#include <REGX52.h>
delay() {
    unsigned int R5, R4, R3;
    for (R5 = 10; R5 > 0; R5--) {
        for (R4 = 180; R4 > 0; R4--) {
            for (R3 = 255; R3 > 0; R3--) {}
        }
    }
}
main() {
    while (1) {
        P2 = 0xC0;
        delay();
        P2 = 0xF9;
        delay();
        P2 = 0xA4;
        delay();
        P2 = 0xB0;
        delay();
        P2 = 0x99;
        delay();
        P2 = 0x92;
        delay();
        P2 = 0x82;
        delay();
        P2 = 0xF8;
        delay();
        P2 = 0x80;
        delay();
        P2 = 0x90;
        delay();
    }
}
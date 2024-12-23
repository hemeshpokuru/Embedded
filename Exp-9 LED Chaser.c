#include <REGX52.h>
delay() {
    unsigned int R4;
    for (R4 = 255; R4 > 0; R4--) {}
}
main() {
    while (1) {
        P2 = 0x01;
        delay();
        P2 = 0x02;
        delay();
        P2 = 0x04;
        delay();
        P2 = 0x08;
        delay();
        P2 = 0x10;
        delay();
        P2 = 0x20;
        delay();
        P2 = 0x40;
        delay();
        P2 = 0x80;
        delay();
    }
}
#include "mbed.h"
#include "io-tea/node.h"
#include "greyscale.h"

iotea::earlgrey::GreyscaleSensor greyscaleSensor(A0);

int main() {
    setupSerial("EARLGREY - greyscale sensor");
    setupNodeRadio(0xABCDEF00);
    setupTicker();

    time_t lastStatsTime = time(nullptr) - 1;
    while (true) {
        time_t now = time(nullptr);
        if (lastStatsTime != now) {
            lastStatsTime = now;
            printStatus();
        }

        if (tick) {
            tick = false;
            sendCoapMessage("g", std::to_string(greyscaleSensor.read()));
        }
    }
}

#include "mbed.h"
#include "greyscale.h"

Serial serial(USBTX, USBRX);
iotea::earlgrey::GreyscaleSensor greyscaleSensor(A0);
iotea::earlgrey::greyscale_t value;

int main() {
    serial.baud(115200);
    while (true) {
        value = greyscaleSensor.read();
        serial.printf("%.2f\r\n", value);
    }
}

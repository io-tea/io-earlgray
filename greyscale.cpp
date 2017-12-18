#include "greyscale.h"

using namespace iotea::earlgrey;

GreyscaleSensor::GreyscaleSensor(PinName pin) noexcept : analogIn(pin) {}

greyscale_t GreyscaleSensor::read() noexcept {
    return analogIn.read();
}
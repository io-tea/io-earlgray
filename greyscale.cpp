#include "greyscale.h"

using namespace iotea::earlgrey;
using namespace iotea::protocol;

GreyscaleSensor::GreyscaleSensor(PinName pin) noexcept : analogIn(pin) {}

greyscale_t GreyscaleSensor::read() noexcept {
    return analogIn.read();
}

std::list<Message> GreyscaleSensor::getMessages() {
    Message message(MessageType::GREYSCALE, read());
    return std::list<Message>({message});
}

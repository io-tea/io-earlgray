#pragma once

#include "io-tea/sensor/sensor.h"

#include "mbed.h"

namespace iotea {
    namespace earlgrey {
        using greyscale_t = float;

        class GreyscaleSensor : public iotea::sensor::Sensor {
        public:
            GreyscaleSensor(PinName pin) noexcept;
            greyscale_t read() noexcept;

            virtual std::list<protocol::Message> getMessages() override;

        private:
            AnalogIn analogIn;
        };
    }
}

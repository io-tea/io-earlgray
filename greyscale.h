#pragma once

#include "mbed.h"

namespace iotea {
    namespace earlgrey {
        using greyscale_t = float;

        class GreyscaleSensor {
        public:
            GreyscaleSensor(PinName pin) noexcept;
            greyscale_t read() noexcept;

        private:
            AnalogIn analogIn;
        };
    }
}

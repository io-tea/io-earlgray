#include "io-tea/node/node.h"

#include "mbed.h"
#include "greyscale.h"

int main() {
    iotea::node::Node node(iotea::NodeName::NODE_EARLGREY);
    node.addSensor(std::make_unique<iotea::earlgrey::GreyscaleSensor>(A0));
    node.run();
}

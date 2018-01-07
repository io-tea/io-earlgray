#include "io-tea/node/node.h"

#include "mbed.h"

int main() {
    iotea::node::Node node(iotea::NodeName::NODE_EARLGREY);
    node.run();
}

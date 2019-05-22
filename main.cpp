#include <iostream>
#include "mnist/mnist_reader.hpp"
#include "FrequencyTable.h"

int main() {
    auto dataset = mnist::read_dataset<std::vector, std::vector, uint8_t, uint8_t>("data");

    auto data = dataset.training_images;

    //data

    //FrequencyTable fqt();

    return 0;
}
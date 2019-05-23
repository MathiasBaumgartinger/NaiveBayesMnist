//
// Created by mathias on 5/22/19.
//

#include <numeric>
#include "FrequencyTable.h"
#include <map>
#include <iostream>
#include <bits/stl_vector.h>
#include <vector>
#include <list>


FrequencyTable::FrequencyTable(std::vector<std::vector<uint8_t>> images, std::vector<uint8_t> labels, int threshold) {

    for (int i = 0; i < images.size(); i++) {
        uint8_t label = labels[i];
        auto image = images[i];
        for (int pixel = 0; pixel < 784; pixel++) {

            if (pixel > threshold) {
                attributeFrequencies[pixel][label]++;
            }
        }
    }
}



std::map<std::uint16_t, std::map<std::uint8_t , int>> FrequencyTable::getAttributeFrequencies() {
    return this->attributeFrequencies;
}

void FrequencyTable::setAttributeFrequencies(std::map<std::uint16_t, std::map<std::uint8_t, int>> frequencies) {
    this->attributeFrequencies = frequencies;
}



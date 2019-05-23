//
// Created by mathias on 5/22/19.
//

#include <iostream>
#include "LikelihoodTable.h"

LikelihoodTable::LikelihoodTable(std::vector<std::vector<uint8_t>> images, std::vector<uint8_t> labels, int threshold) {
    attributeFrequencies = new std::map<std::uint16_t, std::map<std::uint8_t , int>>();

    int currentImage = 0;
    for (const auto &image : images) {
        uint8_t label = labels[currentImage];

        for (int pixel = 0; pixel < 784; pixel++) {

            uint8_t pixelValue = image[pixel];
            if (pixelValue > threshold) {
                (*attributeFrequencies)[pixel][label]++;
            }
        }
        currentImage++;
    }
}


void LikelihoodTable::makeRelativeAttributeFrequencies() {
    auto attFreq = *attributeFrequencies;

    for (int pixel = 0; pixel < 784; pixel++) {
        double divisor = 0;
        for (const auto& entry : attFreq[pixel]) {
            divisor += entry.second;
        }

        for (const auto& entry : attFreq[pixel]) {
            double dividend = attFreq[pixel][entry.first];
            relativeAttributeFrequencies[pixel][entry.first] = dividend / divisor;
        }
    }


    /*for (int row = 0; row < attFreq.size(); row++) {
        for (int col = 0; col <= 9; col++) {
            double currFreq = (double) (int) attFreq[row][col];
            double colAmo = (double) colAmounts[col];
            relativeAttributeFrequencies[row][col] =  (double) (int) attFreq[row][col] / (double) colAmounts[col];
        }
    }*/
}



std::map<std::uint16_t, std::map<std::uint8_t, double>> LikelihoodTable::getTable() {
    return this->relativeAttributeFrequencies;
}

std::vector<int> LikelihoodTable::getColAmounts() {
    return colAmounts;
}


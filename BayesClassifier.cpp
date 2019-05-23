//
// Created by mathias on 5/22/19.
//

#include <cfloat>
#include "BayesClassifier.h"
#include "LikelihoodTable.h"

uint8_t BayesClassifier::classify(std::vector<uint8_t> image, int threshold, LikelihoodTable &lht) {

    auto relativeFrequencies = lht.getTable();
    std::map<uint8_t, double> Classification;


    for (uint8_t digit = 0; digit <= 9; digit++) {

        Classification[digit] = relativeLabelCount[digit];

        for (uint16_t pixelNumber = 0; pixelNumber < image.size(); pixelNumber++) {
            uint8_t pixel = image[pixelNumber];

            if (pixel > threshold) {
                double probabiltiy;
                if (relativeFrequencies[pixelNumber][digit] > 0) {
                    probabiltiy = relativeFrequencies[pixelNumber][digit];
                } else {
                    probabiltiy = 1;
                }

                Classification[digit] *= probabiltiy * 9;
            }
        }
    }
    return findMostCommon(Classification);
}

void BayesClassifier::setLabelAmounts(const std::vector<std::vector<uint8_t>> &training_images,
                                      const std::vector<uint8_t> &training_lables)
{
    numberOfTrainingImages = training_images.size();

    for (uint8_t label : training_lables) {
        labelCount[label]++;
    }

    for (int label = 0; label <= 9; label++) {
        auto labelAmount = (double) labelCount[label];
        relativeLabelCount[label] =  labelAmount / numberOfTrainingImages;
    }

}

uint8_t BayesClassifier::findMostCommon(const std::map<uint8_t, double> &pixels) const {

    float maxValue = -FLT_MAX;
    uint8_t maxDigit = 0;

    for (const auto entry : pixels) {

        if (entry.first > maxValue) {

            maxValue = entry.first;
            maxDigit = entry.second;
        }
    }

    return maxDigit;
}
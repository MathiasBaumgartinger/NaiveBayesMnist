//
// Created by mathias on 5/22/19.
//

#include <cfloat>
#include "BayesClassifier.h"
#include "LikelihoodTable.h"

uint8_t BayesClassifier::classify(std::vector<uint8_t> image, int threshold, LikelihoodTable &lht) {

    auto relativeFrequencies = lht.getTable();
    std::map<uint8_t, double> classification;


    for (uint8_t digit = 0; digit <= 9; digit++) {

        classification[digit] = relativeLabelCount[digit];
        for (uint16_t pixelNumber = 0; pixelNumber < image.size(); pixelNumber++) {
            uint8_t pixel = image[pixelNumber];

            if (pixel > threshold) {
                double probability = 0;
                if(relativeFrequencies[pixelNumber][digit] > 0) {
                    probability = relativeFrequencies[pixelNumber][digit];
                }
                classification[digit] *= probability * 8;
                /*for (uint8_t digit = 0; digit <= 9; digit++) {

                    classification[digit] /= relativeLabelCount[digit];
                    for (uint16_t pixelNumber = 0; pixelNumber < image.size(); pixelNumber++) {
                        uint8_t pixel = image[pixelNumber];

                        if (pixel > threshold) {
                            double probability = 0;
                            if (relativeFrequencies[pixelNumber][digit] > 0) {
                                probability = relativeFrequencies[pixelNumber][digit];
                                classification[digit] /= probability;
                            }
                        }
                    }
                }*/
            }
        }
    }
    return findMostCommon(classification);
}

uint8_t BayesClassifier::findMostCommon(const std::map<uint8_t, double> &pixels) const {
    double highestProbabilty = 0;
    uint8_t mostCommonLabel = 0;

    for (const auto entry : pixels) {
        if (entry.second > highestProbabilty) {
            highestProbabilty = entry.second;
            mostCommonLabel = entry.first;
        }
    }

    return mostCommonLabel;
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


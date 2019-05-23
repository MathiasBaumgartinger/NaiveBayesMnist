//
// Created by mathias on 5/22/19.
//

#ifndef NAIVE_BAYES_BAYESCLASSIFIER_H
#define NAIVE_BAYES_BAYESCLASSIFIER_H

#include <map>
#include <vector>
#include "LikelihoodTable.h"

class BayesClassifier {
public:
    uint8_t classify(std::vector<uint8_t> image, int threshold, LikelihoodTable &lht);
    void setLabelAmounts(const std::vector<std::vector<uint8_t>> &training_images,
                         const std::vector<uint8_t> &training_lables);

private:
    int numberOfTrainingImages;
    int sizeOfImageInPixel;

    std::map<uint8_t, uint32_t> labelCount;
    std::map<uint8_t, double> relativeLabelCount;


    uint8_t findMostCommon(const std::map<uint8_t, double> &pixels) const;

};


#endif //NAIVE_BAYES_BAYESCLASSIFIER_H

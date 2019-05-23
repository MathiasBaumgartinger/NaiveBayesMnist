//
// Created by mathias on 5/22/19.
//

#ifndef NAIVE_BAYES_LIKELIHOODTABLE_H
#define NAIVE_BAYES_LIKELIHOODTABLE_H


#include "FrequencyTable.h"
#include <memory>

class LikelihoodTable {
public:
    LikelihoodTable(std::vector<std::vector<uint8_t>> images, std::vector<uint8_t> labels, int threshold);

    std::map<std::uint16_t, std::map<std::uint8_t, double>> getTable();
    std::vector<int> getColAmounts ();
    void setAttributeFrequencies(std::map<std::uint16_t, std::map<std::uint8_t , int>>);

    double getColumnAmount(uint8_t attribute, uint8_t result, FrequencyTable fqt);
    void setColumnAmounts();

    void makeRelativeAttributeFrequencies();

private:
    std::map<std::uint16_t, std::map<std::uint8_t , int>>* attributeFrequencies;
    std::map<std::uint16_t, std::map<std::uint8_t, double>> relativeAttributeFrequencies;
    std::vector<int> colAmounts = std::vector<int>(9, 0);



};


#endif //NAIVE_BAYES_LIKELIHOODTABLE_H

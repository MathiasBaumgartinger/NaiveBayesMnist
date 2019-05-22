//
// Created by mathias on 5/22/19.
//

#ifndef NAIVE_BAYES_LIKELIHOODTABLE_H
#define NAIVE_BAYES_LIKELIHOODTABLE_H


#include "FrequencyTable.h"

class LikelihoodTable {
public:
    LikelihoodTable(FrequencyTable frequencyTable);

private:
    std::map<std::string, std::map<std::string, double>> relativeAttributeFrequencies;


    double getLikelihood(std::string attribute, std::string result, FrequencyTable ft);
};


#endif //NAIVE_BAYES_LIKELIHOODTABLE_H

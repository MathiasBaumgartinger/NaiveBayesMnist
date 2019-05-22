//
// Created by mathias on 5/22/19.
//

#include "LikelihoodTable.h"

LikelihoodTable::LikelihoodTable(FrequencyTable frequencyTable) {
    auto attributeFrequencies = frequencyTable.getAttributeFrequencies();
    std::list<std::string> attributes = std::list<std::string>();
    std::list<std::string> results = std::list<std::string>();

    for (auto const &entry : attributeFrequencies) {
        attributes.push_back(entry.first);
    }

    for (auto const &entry : attributeFrequencies[attributes.front()]) {
        results.push_back(entry.first);
    }

    for (auto const& attribute : attributes) {
        for (auto const& result : results) {
            this->relativeAttributeFrequencies[attribute][result] = getLikelihood(attribute, result, frequencyTable);
        }
    }

}

double LikelihoodTable::getLikelihood(std::string attribute, std::string result, FrequencyTable ft) {
    auto attributeFrequencies = ft.getAttributeFrequencies();
    int dividend = attributeFrequencies[attribute][result];
    int divisor = dividend;

    for (auto attr : attributeFrequencies) {
        divisor += attr.second[result];
    }

    return (double) dividend / (double) divisor;
}

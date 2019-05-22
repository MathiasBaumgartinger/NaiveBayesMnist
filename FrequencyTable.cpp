//
// Created by mathias on 5/22/19.
//

#include <numeric>
#include "FrequencyTable.h"
#include "EntropyCalculator.h"
#include <map>
#include <iostream>
#include <bits/stl_vector.h>
#include <vector>
#include <list>


FrequencyTable::FrequencyTable(const std::vector<std::vector<std::string>> &data, int column) {


    for (const auto &line : data) {


        std::string attributeVal = line[column];
        std::string resultVal = line.back();

        attributeFrequencies[attributeVal][resultVal] += 1;
    }
}


std::list<std::string> FrequencyTable::getAttributes() {
    auto attributes = std::list<std::string>();

    for (const auto &attribute : attributeFrequencies) {
        attributes.push_back(attribute.first);
    }

    return attributes;
}

std::map<std::string, std::map<std::string, int>> FrequencyTable::getAttributeFrequencies() {
    return this->attributeFrequencies;
}



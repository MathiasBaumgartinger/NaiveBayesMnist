//
// Created by mathias on 5/22/19.
//

#ifndef NAIVE_BAYES_FREQUENCYTABLE_H
#define NAIVE_BAYES_FREQUENCYTABLE_H

#include <string>
#include <list>
#include <vector>
#include <map>

class FrequencyTable {
public:


    FrequencyTable(std::vector<std::vector<uint8_t>> images, std::vector<uint8_t> labels, int column);

    std::map<std::uint16_t , std::map<std::uint8_t , int>> getAttributeFrequencies();
    void setAttributeFrequencies(std::map<std::uint16_t, std::map<std::uint8_t , int>>);


private:
    // Maps attribute values to the frequencies of an outcome
    std::map<std::uint16_t, std::map<std::uint8_t , int>> attributeFrequencies;

};

#endif //NAIVE_BAYES_FREQUENCYTABLE_H

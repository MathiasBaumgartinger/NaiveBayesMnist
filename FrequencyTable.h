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
    FrequencyTable(const std::vector<std::vector<std::string>> &data, int column);


    std::map<std::string, std::map<std::string, int>> getAttributeFrequencies();


private:
    // Maps attribute values to the frequencies of an outcome
    std::map<std::string, std::map<std::string, int>> attributeFrequencies;



    int attributeCount;

    std::list<std::string> getAttributes();
};

#endif //NAIVE_BAYES_FREQUENCYTABLE_H

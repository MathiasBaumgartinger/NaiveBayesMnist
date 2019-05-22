//
// Created by mathias on 5/22/19.
//

#ifndef NAIVE_BAYES_ENTROPYCALCULATOR_H
#define NAIVE_BAYES_ENTROPYCALCULATOR_H

#include <vector>


class EntropyCalculator {
public:
    EntropyCalculator() = default;

    double getEntroy(const std::vector<int> &input, int sum);
};


#endif //NAIVE_BAYES_ENTROPYCALCULATOR_H

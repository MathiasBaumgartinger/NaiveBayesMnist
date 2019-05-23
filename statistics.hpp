//
// Created by mathias on 5/23/19.
//

#pragma once

#include <map>
#include <string>
#include <iostream>

namespace statistics {

    typedef std::map<uint8_t, std::map<uint8_t, uint32_t>> ConfusionMatrix;

    void initMatrix(ConfusionMatrix& matrix, const size_t rows, const size_t cols, const uint8_t defaultValue = 0) {

        for (int row = 0; row < rows; row++) {
            for (int col = 0; col < cols; col++) {
                matrix[row][col] = defaultValue;
            }
        }
    }

    void printConfusionMatrix(const ConfusionMatrix& matrix) {

        std::cout << '\t';

        for (const auto& [actual, values] : matrix) {
            std::cout << std::to_string(actual) << '\t';
        }

        std::cout << std::endl;

        for (const auto& [actual, val] : matrix) {

            std::cout << std::to_string(actual) << '\t';

            for (const auto& [predicted, count] : val) {

                std::cout << std::to_string(count) << '\t';
            }

            std::cout << std::endl;
        }
    }
}
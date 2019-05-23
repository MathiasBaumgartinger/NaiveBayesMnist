//
// Created by mathias on 5/23/19.
//

#pragma once

#include <map>
#include <string>
#include <iostream>

namespace statistics {

    //[actual][predicted]
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

    struct ConfusionMetrics {
        int tp, fp, fn, tn;
    };

    void getConfusionMetrices(const ConfusionMatrix& matrix, const uint8_t classification, ConfusionMetrics& metrices) {

        int tp = 0;
        int fp = 0;
        int fn = 0;
        int tn = 0;

        for (const auto& [actual, val] : matrix) {

            if (actual == classification) {

                for (const auto& [predicted, count] : val) {

                    if (predicted == classification) tp += count;
                    else fn += count;
                }
            }
            else {

                for (const auto& [predicted, count] : val) {

                    if (predicted == classification) fp += count;
                    else tn += count;
                }
            }
        }

        metrices.tp = tp;
        metrices.fp = fp;
        metrices.fn = fn;
        metrices.tn = tn;
    }

    float getAcc(const ConfusionMetrics& metrices) {

        return ((float)(metrices.tp) + metrices.tn) / (metrices.tp + metrices.fp + metrices.fn + metrices.tn);
    }
}
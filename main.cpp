#include <iostream>
#include "mnist/mnist_reader.hpp"
#include "FrequencyTable.h"
#include "LikelihoodTable.h"
#include "BayesClassifier.h"
#include "statistics.hpp"


int main() {
    auto dataset = mnist::read_dataset<std::vector, std::vector, uint8_t, uint8_t>("../data");

    auto data = dataset.training_images;
    auto labels = dataset.training_labels;
    auto test_data = dataset.test_images;
    auto test_labels = dataset.test_labels;



    LikelihoodTable lht = LikelihoodTable(data, labels, 100);
    lht.makeRelativeAttributeFrequencies();
    auto relativeFrequencies = lht.getTable();

    BayesClassifier classifier = BayesClassifier();
    classifier.setLabelAmounts(test_data, test_labels);

    statistics::ConfusionMatrix matrix;
    statistics::initMatrix(matrix, 10, 10);

    for (size_t imageNumber = 0; imageNumber < dataset.test_images.size(); imageNumber++) {

        uint8_t actual = dataset.test_labels[imageNumber];
        uint8_t classified = classifier.classify(test_data[imageNumber], 100, lht);

        matrix[actual][classified]++;
    }

    statistics::printConfusionMatrix(matrix);

    return 0;
}


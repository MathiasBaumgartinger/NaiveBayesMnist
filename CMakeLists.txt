cmake_minimum_required(VERSION 3.14)
project(Naive_Bayes)

set(CMAKE_CXX_STANDARD 14)

add_executable(Naive_Bayes main.cpp FrequencyTable.cpp FrequencyTable.h Classifier.cpp Classifier.h LikelihoodTable.cpp LikelihoodTable.h BayesClassifier.cpp BayesClassifier.h statistics.hpp)
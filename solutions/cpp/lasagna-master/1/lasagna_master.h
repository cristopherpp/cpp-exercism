#pragma once
#include <iostream>
#include <string>
#include <vector>

using ingredients = std::vector<std::string>;

namespace lasagna_master {

struct amount {
    int noodles;
    double sauce;
};

    int preparationTime(const ingredients &layers, int timePerLayer = 2);
    struct amount quantities(const ingredients &layers);
    void addSecretIngredient(ingredients &myList, const ingredients &friendsList);
    void addSecretIngredient(ingredients &myList, const std::string &secretIngredient);
    std::vector<double> scaleRecipe(const std::vector<double> quantities, int portions);

}  // namespace lasagna_master

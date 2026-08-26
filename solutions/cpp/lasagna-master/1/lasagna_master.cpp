#include "lasagna_master.h"
#include <algorithm>

namespace lasagna_master {
    int preparationTime(const ingredients &layers, int timePerLayer)
    {
        return layers.size() * timePerLayer;
    }

    struct amount quantities(const ingredients &layers)
    {
        double sauce = 0.0;
        int noodles = 0;

        for (auto &i : layers)
            {
            if (i == "sauce")
                sauce += 0.2;
            if (i == "noodles")
                noodles += 50;
            }
        struct amount result{noodles, sauce};
        return result;
    }

    void addSecretIngredient(ingredients &myList, const ingredients &friendsList)
    {
        myList.back() = friendsList.back();
    }

    std::vector<double> scaleRecipe(const std::vector<double> quantities, int portions)
    {
        double dividedPortions = portions / 2.0;
        std::vector<double> newQuantities(quantities.size());
        std::transform(quantities.begin(), quantities.end(), newQuantities.begin(),
                   [dividedPortions](double q){ return dividedPortions * q;});
        return newQuantities;
    }

    void addSecretIngredient(ingredients &myList, const std::string &secretIngredient)
    {
        myList.pop_back();
        myList.push_back(secretIngredient);
    }
}  // namespace lasagna_master

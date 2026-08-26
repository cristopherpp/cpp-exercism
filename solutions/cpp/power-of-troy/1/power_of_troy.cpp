#include "power_of_troy.h"

namespace troy {
    void give_new_artifact(human &human, std::string artifact_name)
    {
        human.possession = std::make_unique<artifact>(artifact_name);
    }

    void exchange_artifacts(std::unique_ptr<artifact> &artifact1, std::unique_ptr<artifact> &artifact2)
    {
        std::swap(artifact1, artifact2);
    }

    void manifest_power(human &human, std::string new_power)
    {
        human.own_power = std::make_unique<power>(new_power);
    }

    void use_power(human &human1, human &human2)
    {
        human2.influenced_by = human1.own_power;
    }

    int power_intensity(human &human)
    {
        return human.own_power.use_count();
    }
}  // namespace troy

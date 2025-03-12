#pragma once
#include <string>

class Map
{
private:
    std::string name;
    double t_SidedMltp, ct_SidedMltp;

public:
    Map(std::string name, double t_SidedMltp, double ct_SidedMltp);

    std::string getName() const;
    
    double getTSidedMultiplier() const;
    double getCTSidedMultiplier() const;

    double getMultiplier(bool isCT) const;
};
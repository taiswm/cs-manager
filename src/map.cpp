#include "..\includes\map.h"

Map::Map(std::string name, double t_SidedMltp, double ct_SidedMltp)
    : name(name), t_SidedMltp(t_SidedMltp), ct_SidedMltp(ct_SidedMltp){}

std::string Map::getName()const{return name;}
double Map::getTSidedMultiplier()const{return t_SidedMltp;}
double Map::getCTSidedMultiplier()const{return ct_SidedMltp;}

double Map::getMultiplier(bool isCT) const {
    return isCT ? ct_SidedMltp : t_SidedMltp;
}
#pragma once
#include <string>
#include <vector>
#include "player.h"

class Team
{
private:
    std::string name;
    std::vector<Player> players;
    
public:
Team(std::string name, std::vector<Player> players);
void displayTeamInfo() const;

};

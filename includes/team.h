#pragma once
#include <string>
#include <vector>
#include "player.h"

class Team
{
private:
    std::string name;
    std::vector<Player> players;
    int roundsWon; // Tilføj denne for at tracke vundne runder

public:
    Team(std::string name, std::vector<Player> players);

    void displayTeamInfo() const;
    
    // Gør disse offentlige, så de kan bruges i match_simulation.cpp
    std::string getName() const;  
    int getRoundsWon() const;
    void addRoundWin();
    
    double getTeamStrength() const; // Tilføj denne metode
};

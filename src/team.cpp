#include "../includes/team.h"
#include <iostream>

Team::Team(std::string name, std::vector<Player> players) : name(name), players(players) {

};

void Team::displayTeamInfo() const {
    std::cout << "=== Team: " << name << " ===" << std::endl;
    for (const auto& player : players) {
        player.displayInfo();
    }
}
#include "../includes/team.h"
#include <iostream>

Team::Team(std::string name, std::vector<Player> players) 
    : name(name), players(players), roundsWon(0) {} // Initialiser roundsWon

void Team::displayTeamInfo() const {
    std::cout << "=== Team: " << name << " ===" << std::endl;
    for (const auto& player : players) {
        player.displayInfo();
    }
}

std::string Team::getName() const { return name; }
int Team::getRoundsWon() const { return roundsWon; }
void Team::addRoundWin() { roundsWon++; }

// Tilføj denne funktion for at beregne team strength
double Team::getTeamStrength() const {
    double totalStrength = 0;
    for (const Player& p : players) {
        totalStrength += p.getRating();
    }
    return totalStrength / players.size(); // Gennemsnitlig styrke
}

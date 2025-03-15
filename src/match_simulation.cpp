#include "../includes/match_simulation.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

bool simulateRound(Team& team1, Team& team2, bool isPistolRound) {
    double team1Strength = team1.getTeamStrength();
    double team2Strength = team2.getTeamStrength();

    if (isPistolRound) {
        team1Strength *= 1.05;
        team2Strength *= 1.05;
    }

    double winChanceT1 = team1Strength / (team1Strength + team2Strength);
    double randomValue = (double)rand() / RAND_MAX;

    if (randomValue < winChanceT1) {
        team1.addRoundWin(); // Brug den nye metode
        return true;
    } else {
        team2.addRoundWin();
        return false;
    }
}

void simulateMatch(Team& team1, Team& team2) {
    std::cout << "Starting match: " << team1.getName() << " vs. " << team2.getName() << std::endl;
    srand(time(0));

    bool t1WonPistol1 = simulateRound(team1, team2, true);
    bool t1WonPistol2 = simulateRound(team1, team2, true);

    std::cout << "Pistol Round 1 Winner: " << (t1WonPistol1 ? team1.getName() : team2.getName()) << std::endl;
    std::cout << "Pistol Round 2 Winner: " << (t1WonPistol2 ? team1.getName() : team2.getName()) << std::endl;

    while (team1.getRoundsWon() < 13 && team2.getRoundsWon() < 13) {
        simulateRound(team1, team2, false);
        std::cout << "Current Score: " << team1.getName() << " " << team1.getRoundsWon() 
                  << " - " << team2.getRoundsWon() << " " << team2.getName() << std::endl;
    }

    std::cout << "Match Winner: " << (team1.getRoundsWon() > team2.getRoundsWon() ? team1.getName() : team2.getName()) << "!" << std::endl;
}

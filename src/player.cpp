#include "../includes/player.h"
#include <iostream>

Player::Player(std::string name, std::string nationality, int age,
               int crosshairPlacement, int reactionTime, int movement, int sprayControl, int flickAccuracy,
               int gameSense, int decisionMaking, int clutchFactor, int communication, int composure)
: name(name), nationality(nationality), age(age),
  crosshairPlacement(crosshairPlacement), reactionTime(reactionTime), movement(movement),
  sprayControl(sprayControl), flickAccuracy(flickAccuracy),
  gameSense(gameSense), decisionMaking(decisionMaking), clutchFactor(clutchFactor),
  communication(communication), composure(composure) {
    
    calculateMechanicalScore();
    calculateMentalScore();
    calculateRating();
}

void Player::calculateMechanicalScore() {
    mechanicalScore = (crosshairPlacement + reactionTime + movement + sprayControl + flickAccuracy) / 5.0;
}

void Player::calculateMentalScore() {
    mentalScore = (gameSense + decisionMaking + clutchFactor + communication + composure) / 5.0;
}

void Player::calculateRating() {
    rating = (mechanicalScore * 2 + mentalScore) / 3; // Mechanical vejer mere
}

void Player::displayInfo() const {
    std::cout << "Player: " << name << " (" << nationality << "), Age: " << age << std::endl;
    std::cout << "Overall Rating: " << rating << "/100" << std::endl;
    std::cout << "Mechanical Score: " << mechanicalScore << "/100" << std::endl;
    std::cout << "Mental Score: " << mentalScore << "/100" << std::endl;
    std::cout << "------------------------------------" << std::endl;
}

std::string Player::getName() const { return name; }
std::string Player::getNationality() const { return nationality; }
int Player::getAge() const { return age; }
double Player::getRating() const { return rating; }
double Player::getMechanicalScore() const { return mechanicalScore; }
double Player::getMentalScore() const { return mentalScore; }

int Player::getCrosshairPlacement() const { return crosshairPlacement; }
int Player::getReactionTime() const { return reactionTime; }
int Player::getMovement() const { return movement; }
int Player::getSprayControl() const { return sprayControl; }
int Player::getFlickAccuracy() const { return flickAccuracy; }

int Player::getGameSense() const { return gameSense; }
int Player::getDecisionMaking() const { return decisionMaking; }
int Player::getClutchFactor() const { return clutchFactor; }
int Player::getCommunication() const { return communication; }
int Player::getComposure() const { return composure; }

double Player::applyWeaponBoost(WeaponType weapon) {
    double boostedRating = rating;
    
    switch (weapon) {
        case WeaponType::Pistol:
            boostedRating *= 1.01; // +1% boost
            break;
        case WeaponType::SMG:
            boostedRating *= 1.005; // +0.5%
            break;
        case WeaponType::Rifle:
            boostedRating *= 1.00; // Ingen boost
            break;
        case WeaponType::Sniper:
            boostedRating *= 1.015; // +1.5% boost
            break;
        case WeaponType::Shotgun:
            boostedRating *= 1.005; // +0.5% boost
            break;
        case WeaponType::LMG:
            boostedRating *= 0.99; // -1% straf
            break;
    }

    return boostedRating;
}

double Player::applyMapBoost(MapPreference preference) {
    double adjustedRating = rating;
    
    switch (preference) {
        case MapPreference::Negative:
            adjustedRating *= 0.98; // -2%
            break;
        case MapPreference::Neutral:
            adjustedRating *= 1.00; // Ingen ændring
            break;
        case MapPreference::Positive:
            adjustedRating *= 1.02; // +2%
            break;
    }

    return adjustedRating;
}

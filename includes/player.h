#pragma once

#include <string>

enum class WeaponType {
    Pistol, SMG, Rifle, Sniper, Shotgun, LMG
};

enum class MapPreference {
    Negative, Neutral, Positive
};

class Player {
private:
    std::string name;
    std::string nationality;
    int age;
    
    // Mechanical Skills
    int crosshairPlacement;
    int reactionTime;
    int movement;
    int sprayControl;
    int flickAccuracy;
    
    // Mental Skills
    int gameSense;
    int decisionMaking;
    int clutchFactor;
    int communication;
    int composure;
    
    double mechanicalScore;
    double mentalScore;
    double rating;

    void calculateMechanicalScore();
    void calculateMentalScore();
    void calculateRating();

public:
    Player(std::string name, std::string nationality, int age,
           int crosshairPlacement, int reactionTime, int movement, int sprayControl, int flickAccuracy,
           int gameSense, int decisionMaking, int clutchFactor, int communication, int composure);

    void displayInfo() const;
    double getRating() const;
    double getMechanicalScore() const;
    double getMentalScore() const;
    
    std::string getName() const;
    std::string getNationality() const;
    int getAge() const;
    
    int getCrosshairPlacement() const;
    int getReactionTime() const;
    int getMovement() const;
    int getSprayControl() const;
    int getFlickAccuracy() const;
    
    int getGameSense() const;
    int getDecisionMaking() const;
    int getClutchFactor() const;
    int getCommunication() const;
    int getComposure() const;

    double applyWeaponBoost(WeaponType weapon);
    double applyMapBoost(MapPreference preference);
};

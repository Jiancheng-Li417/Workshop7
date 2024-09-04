#include "Appliance.h"  

Appliance::Appliance() : powerRating(0), isOn(false) {}

Appliance::Appliance(int powerRating) : powerRating(powerRating), isOn(false) {}

void Appliance::set_powerRating(int rating) {
    powerRating = rating;
}

int Appliance::get_powerRating() const {
    return powerRating;
}

void Appliance::turnOn() {
    isOn = true;
}

void Appliance::turnOff() {
    isOn = false;
}

bool Appliance::get_isOn() const {
    return isOn;
}

double Appliance::getPowerConsumption() const {
    return 0.0;
}
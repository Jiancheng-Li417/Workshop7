#include "House.h"  

House::House() : appliances(nullptr), numAppliances(0), capacity(0) {}

House::House(int numAppliances) : numAppliances(0), capacity(numAppliances) {
    appliances = new Appliance * [capacity];
}

House::~House() {
    for (int i = 0; i < numAppliances; ++i) {
        delete appliances[i]; 
    }
    delete[] appliances;
}

bool House::addAppliance(Appliance* appliance) {
    if (numAppliances >= capacity) {
        Appliance** newAppliances = new Appliance * [capacity * 2];
        for (int i = 0; i < numAppliances; ++i) {
            newAppliances[i] = appliances[i];
        }
        delete[] appliances;
        appliances = newAppliances;
        capacity *= 2;
    }
    appliances[numAppliances++] = appliance;
    return true; 
}

double House::getTotalPowerConsumption() const {
    double total = 0.0;
    for (int i = 0; i < numAppliances; ++i) {
        total += appliances[i]->getPowerConsumption();
    }
    return total;
}
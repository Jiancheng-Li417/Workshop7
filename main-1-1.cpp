#include <iostream>  
#include "Appliance.h"  

int main() {
    Appliance fridge(150); 

    std::cout << "Initial power rating: " << fridge.get_powerRating() << std::endl;
    std::cout << "Is fridge on? " << (fridge.get_isOn() ? "Yes" : "No") << std::endl;

    fridge.turnOn();
    std::cout << "After turning on, is fridge on? " << (fridge.get_isOn() ? "Yes" : "No") << std::endl;

    double consumption = fridge.getPowerConsumption(); 
    std::cout << "Power consumption: " << consumption << " Watts" << std::endl;

    return 0;
}
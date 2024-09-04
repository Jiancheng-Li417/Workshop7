#include <iostream>  
#include "Fridge.h"  

int main() {
    Fridge myFridge(120, 250); 

    std::cout << "Fridge power rating: " << myFridge.get_powerRating() << std::endl;
    std::cout << "Fridge volume: " << myFridge.getVolume() << " litres" << std::endl;

    double consumption = myFridge.getPowerConsumption();
    std::cout << "Estimated daily power consumption: " << consumption << " Watts" << std::endl;

    return 0;
}

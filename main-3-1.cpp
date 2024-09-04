#include <iostream>  
#include "House.h"  
#include "Appliance.h"  
#include "TV.h"


int main() {
    House myHouse(5);  

    TV* tv1 = new TV(150, 80);  
    TV* tv2 = new TV(150, 55);

    myHouse.addAppliance(tv1);
    myHouse.addAppliance(tv2);

    std::cout << "Total power consumption: " << myHouse.getTotalPowerConsumption() << " Watts" << std::endl;

    return 0;
}
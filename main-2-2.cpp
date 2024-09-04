#include <iostream>  
#include "TV.h"  

int main() {
    TV myTV(150, 55);  
 
    std::cout << "TV power rating: " << myTV.get_powerRating() << std::endl;   
    std::cout << "TV screen size: " << myTV.getScreenSize() << " inches" << std::endl;

    double consumption = myTV.getPowerConsumption();
    std::cout << "Estimated power consumption: " << consumption << " Watts" << std::endl;

    return 0;
}
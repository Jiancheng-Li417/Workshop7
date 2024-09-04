#ifndef APPLIANCE_H  
#define APPLIANCE_H  

class Appliance {
private:
    int powerRating;
    bool isOn;

public:
    Appliance();
    Appliance(int powerRating);

    void set_powerRating(int rating);
    int get_powerRating() const;

    void turnOn();
    void turnOff();
    bool get_isOn() const;

    virtual double getPowerConsumption() const;
};

#endif
#include <iostream>
#include "car.h"

void setType (std::string type) {
    this->type = type;
}

void setYear (int year) {
    this->year = year;
}

void setColor (std::string color) {
    this->color = color; 
}

void setVin (std::string vin) {
    this->vin = vin;
}
  
void setCost (int cost) {
    this->cost = cost;
}

std::string getType () {
    return this->type;
}

int getYear () const {
    return this->year;
}

std::string getColor () const {
    return this->color;
}
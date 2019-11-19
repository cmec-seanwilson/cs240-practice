#include <iostream>

class Car {
    private:
        std::string type;
        int year;
        std::string color;
        std::string vin;
        int cost;
        double mpg;

    public:
        bool sdrive;

        Car (std::string type, int year, std::string color, std::string vin, int cost) {
            this->type = type;
            this->year = year;
            this->color = color;
            this->vin = vin;
            this->cost = cost;
        }

        void setType(std::string);
        void setYear(int);
        void setColor(std::string);
        void setVin(std::string);
        void setCost(int);
        void setMpg(double);
        std::string getType() const;
        int getYear() const;
        std::string getColor() const;
        std::string getVin() const;
        int getCost() const;
        double getMpg() const;
};
#pragma once
#include "ClassDog.h"

class Dolmat : virtual public Dog
{
private:
    int number_of_black_spots;
public:
    Dolmat();
    Dolmat(string, int, int);
    void show();
    void amount_of_days();
    ~Dolmat();
};
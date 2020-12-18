#pragma once
#include "ClassAnimal.h"

class Cat : virtual public Animal
{
private:
    int norm_;
    int amount_of_feed_;
    string breed_;
public:
    Cat();
    Cat(string, string, int);
    void amount_of_days();
    void show();
    ~Cat();
};
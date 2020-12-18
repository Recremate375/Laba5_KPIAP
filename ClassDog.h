#pragma once
#include "ClassAnimal.h"

class Dog : virtual public Animal
{
protected:
    int norm_;
    int amount_of_feed_;
public:
    Dog();
    Dog(string, int);
    void show();
    void amount_of_days();
    ~Dog();
};
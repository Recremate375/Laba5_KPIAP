#pragma once
#include<iostream>
#include<string>

using namespace std;

class Animal
{
protected:
    string name_;
    double kol_of_days;
public:
    Animal();
    Animal(string);
    virtual void amount_of_days() = 0;
    virtual void show() = 0;
    virtual ~Animal();
};
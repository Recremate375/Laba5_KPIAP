#include "ClassDog.h"

Dog::Dog()
{
    this->name_ = " ";
    this->norm_ = 750;
    this->amount_of_feed_ = 0;
}

Dog::Dog(string name, int amount_of_feed)
{
    this->name_ = name;
    this->norm_ = 750;
    this->amount_of_feed_ = amount_of_feed;
}

void Dog::show()
{
    cout << "Name: " << this->name_ << "." << endl
        << "norm: " << this->norm_ << "g." << endl
        << "You have food for " << this->kol_of_days << " days." << endl
        << this->amount_of_feed_ << "g." << endl;
}

void Dog::amount_of_days()
{
    this->kol_of_days = this->amount_of_feed_ / this->norm_;
    cout << "You have feed on " << this->kol_of_days << " days";
}

Dog::~Dog()
{
}

#include "ClassCat.h"

Cat::Cat()
{
    this->name_ = " ";
    this->breed_ = " ";
    this->kol_of_days = 0;
    this->norm_ = 500;
    this->amount_of_feed_ = 0;
}

Cat::Cat(string name, string breed, int amount_of_feed)
{
    this->name_ = name;
    this->breed_ = breed;
    this->norm_ = 500;
    this->amount_of_feed_ = amount_of_feed;
}

void Cat::amount_of_days()
{
    this->kol_of_days = this->amount_of_feed_ / this->norm_;
}

void Cat::show()
{
    cout << "Name: " << this->name_ << "." << endl
        << "Breed: "<< this->breed_ << endl <<"Norm: " << this->norm_ << "g." << endl
        << "You have food for " << this->kol_of_days << " days." << endl
        << this->amount_of_feed_ << "g." <<endl;
}

Cat::~Cat()
{
}

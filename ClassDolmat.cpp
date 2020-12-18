#include "ClassDolmat.h"

Dolmat::Dolmat()
{
    this->name_ = " ";
    this->norm_ = 700;
    this->number_of_black_spots = 0;
    this->kol_of_days = 0;
    this->amount_of_feed_ = 0;
}

Dolmat::Dolmat(string name, int number_of_spots, int amount_of_feed)
{
    this->name_ = name;
    this->norm_ = 700;
    this->number_of_black_spots = number_of_spots;
    this->amount_of_feed_ = amount_of_feed;
}

void Dolmat::show()
{
    cout << "Name: " << this->name_ << "." << endl
        << "Breed: Dalmatian." << endl << "Number of black spots: " << this->number_of_black_spots << "."<< endl
        << "norm: " << this->norm_ << "g." << endl
        << "You have food for " << this->kol_of_days << " days." << endl
        << this->amount_of_feed_ << "g." << endl;
}

void Dolmat::amount_of_days()
{
    this->kol_of_days = this->amount_of_feed_ / this->norm_;
}

Dolmat::~Dolmat()
{
}

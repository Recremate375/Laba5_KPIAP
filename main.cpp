#include <iostream>
#include "ClassDolmat.h"
#include "ClassCat.h"

int main()
{
    Dog dog("Bim", 1400);
    Cat cat("Barsik", "Maine Coon", 1500);
    Dolmat dalmatin("Funtic", 25, 2000);
    Animal **A = new Animal*[3];
    A[0] = &dog;
    A[1] = &dalmatin;
    A[2] = &cat;
    cout << "Dog:" << endl;
    A[0]->amount_of_days();
    A[0]->show();
    cout << endl << "Dalmatain: " << endl;
    A[1]->amount_of_days();
    A[1]->show();
    cout << endl << "Cat: " << endl;
    A[2]->amount_of_days();
    A[2]->show();
    for (int i = 0; i < 3; i++)
    {
        A[i]->~Animal();
    }
}

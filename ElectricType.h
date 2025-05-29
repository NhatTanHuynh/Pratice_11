#ifndef ELECTRICTYPE_H
#define ELECTRICTYPE_H

#include "PocketMonster.h"
#include <string>

class ElectricType : public PocketMonster {
public:
    ElectricType();
    ElectricType(int atkDmg);
    int attack(string defType) override;
};

#endif
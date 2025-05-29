#ifndef POCKETMONSTER_H
#define POCKETMONSTER_H

#include <string>
using namespace std;

class PocketMonster {
public:
    int hp;
    int attackDmg;
    PocketMonster();
    int attack(string defType);
};

#endif
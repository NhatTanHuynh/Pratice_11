#ifndef POCKETMONSTER_H
#define POCKETMONSTER_H

#include <string>
using namespace std;

class PocketMonster {
public:
    int hp;
    int attackDmg;
    PocketMonster();
    virtual int attack(string defType) = 0;
    virtual ~PocketMonster() = default;
};

#endif
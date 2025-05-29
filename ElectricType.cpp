#include "ElectricType.h"

ElectricType::ElectricType() {
    hp=100;
    attackDmg=15;
}

ElectricType::ElectricType(int atkDmg) {
    hp = 100;
    attackDmg = atkDmg;
}

int ElectricType::attack(string defType) {
    if (defType == "water") {
        return static_cast<int>(attackDmg * 1.5);  // Critical hit
    } else if (defType == "rock") {
        return static_cast<int>(attackDmg * 0.5);  // Reduced damage
    } else {
        return attackDmg;
    }
}
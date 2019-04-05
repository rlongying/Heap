//
// Created by Ivan on 2019-04-05.
//

#include <iostream>
#include "patient.hpp"

std::ostream &operator<<(std::ostream &os, const patient &p) {
    std::cout << "name: " << p.name << "  severity: " << p.severity << std::endl;
    return os;
}

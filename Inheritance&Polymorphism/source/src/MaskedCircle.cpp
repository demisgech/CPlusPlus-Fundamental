#include "MaskedCircle.hpp"

#include <iostream>

using namespace std;

MaskedCircle::MaskedCircle(bool masked) { this->masked = masked; }

void MaskedCircle::mask() { this->masked = true; }

void MaskedCircle::unmask() { this->masked = false; }

bool MaskedCircle::isMasked() const { return masked; }

// Cannot overriden this function any more got compilation error
// void MaskedCircle::draw() const { cout << "Drawing a masked Circle" << endl;
// }

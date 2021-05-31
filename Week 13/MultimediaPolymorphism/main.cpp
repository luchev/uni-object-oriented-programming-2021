#include <iostream>
#include <string>
#include <vector>
#include "MultimediaPlayerSingleton.hpp"

int main() {
    MultimediaPlayer::instance()->add(nullptr);
}

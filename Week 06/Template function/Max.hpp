#pragma once

template <class T = int>
T max(T a, T b) {
    if (a > b) {
        return a;
    }
    return b;
}

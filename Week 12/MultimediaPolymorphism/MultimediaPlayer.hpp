#pragma once
#include "File.hpp"
#include <vector>

class MultimediaPlayer {
    std::vector<File*> data;

    void copy(const MultimediaPlayer& rhs) {
        for (auto x : rhs.data) {
            data.push_back(x->clone());
        }
    }

    void free() {
        for (auto x : data) {
            delete x;
        }
        data.clear();
    }

   public:
    MultimediaPlayer() = default;

    MultimediaPlayer(const MultimediaPlayer& rhs) {
        copy(rhs);
    }

    MultimediaPlayer& operator=(const MultimediaPlayer& rhs) {
        if (this != &rhs) {
            free();
            copy(rhs);
        }
        return *this;
    }

    ~MultimediaPlayer() {
        free();
    }

    void add(File* item) {
        data.push_back(item->clone());
    }

    void remove(size_t index) {
        if (index < data.size()) {
            delete data[index];
            data.erase(data.begin() + index);
        }
    }

    void print_all_files_states() {
        // TODO
    }
};

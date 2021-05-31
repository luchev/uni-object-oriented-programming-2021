#pragma once
#include <vector>

#include "File.hpp"

class MultimediaPlayer {
    std::vector<File*> data;

    MultimediaPlayer() = default;

   public:
    static MultimediaPlayer* instance() {
        static MultimediaPlayer player;
        return &player;
    }

    MultimediaPlayer(const MultimediaPlayer& rhs) = delete;
    MultimediaPlayer& operator=(const MultimediaPlayer& rhs) = delete;

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

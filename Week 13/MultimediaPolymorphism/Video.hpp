#pragma once
#include "File.hpp"
#include "Audio.hpp"
#include <vector>
#include <string>

class Video : public File {
   public:
    std::string subtitles = "";
    std::vector<Audio> audios;

    File* clone() const override {
        return new Video(*this);
    }
};

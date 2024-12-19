#include "fileStream.hpp"
#include <iostream>

FileStream::FileStream() : saveFilePath(SAVEFILE_PATH), playerPath(PLAYER_PATH), enemyPath(ENEMY_PATH) {
    file.open(saveFilePath, std::ios::in | std::ios::out | std::ios::app);
    if (!file.is_open()) {
        std::cerr << "Failed to open file: " << saveFilePath << std::endl;
    }

    file << "PLAYER" << std::endl;
    file << "ENEMY" << std::endl;
    file.close();
}

FileStream::~FileStream() {
    if (file.is_open()) {
        file.close();
    }
}

void FileStream::eraseFile() {
    if (file.is_open()) {
        file.close();
    }
    file.open(saveFilePath, std::ios::out | std::ios::trunc);
    if (!file.is_open()) {
        std::cerr << "Failed to open file: " << saveFilePath << std::endl;
    }
    file.close();
}

void FileStream::rewriteSaveFile(const std::string& content) {
    file.open(saveFilePath, std::ios::out | std::ios::trunc);
    file << content << std::endl;
    file.close();
}

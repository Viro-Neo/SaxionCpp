#ifndef FILESTREAM_HPP
#define FILESTREAM_HPP
#define SAVEFILE_PATH "saves/saveFile.cmgt"
#define PLAYER_PATH "saves/player.cmgt"
#define ENEMY_PATH "saves/enemy.cmgt"

#include <string>
#include <fstream>

class FileStream {
public:
    FileStream();
    ~FileStream();

    void eraseFile();
    void rewriteSaveFile(const std::string& content);

private:
    std::fstream file;
    std::string line;

    std::string saveFilePath;
    std::string playerPath;
    std::string enemyPath;
};

#endif //FILESTREAM_HPP

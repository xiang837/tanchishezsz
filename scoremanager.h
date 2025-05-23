// scoremanager.h
#ifndef SCOREMANAGER_H
#define SCOREMANAGER_H

#include <QString>
#include <map>

class ScoreManager {
public:
    static void loadScores();
    static void saveScores();
    static int getHighScore(const QString& mapName);
    static void updateScore(const QString& mapName, int score);

private:
    static std::map<QString, int> highScores;
    static const QString scoreFilePath;
};

#endif // SCOREMANAGER_H

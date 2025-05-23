// scoremanager.cpp
#include "scoremanager.h"
#include <QFile>
#include <QTextStream>

std::map<QString, int> ScoreManager::highScores;
const QString ScoreManager::scoreFilePath = "scores.txt";

void ScoreManager::loadScores() {
    QFile file(scoreFilePath);
    if (!file.open(QIODevice::ReadOnly)) return;

    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList parts = line.split(":");
        if (parts.size() == 2) {
            highScores[parts[0]] = parts[1].toInt();
        }
    }
}

void ScoreManager::saveScores() {
    QFile file(scoreFilePath);
    if (!file.open(QIODevice::WriteOnly)) return;

    QTextStream out(&file);
    for (const auto& pair : highScores) {
        out << pair.first << ":" << pair.second << "\n";
    }
}

int ScoreManager::getHighScore(const QString& mapName) {
    return highScores.count(mapName) ? highScores[mapName] : 0;
}

void ScoreManager::updateScore(const QString& mapName, int score) {
    if (score > highScores[mapName]) {
        highScores[mapName] = score;
        saveScores();
    }
}

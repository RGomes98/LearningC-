#include <iostream>
#include <vector>
#include <map>

int calculateDiceScore(int number, bool isTriplet)
{
    switch (number)
    {
    case 1:
        return isTriplet ? 1000 : 100;
    case 5:
        return isTriplet ? 500 : 50;
    default:
        return isTriplet ? number * 100 : 0;
    }
}

int greedIsGood(const std::vector<int> dice)
{
    std::map<int, int> scores;
    int totalScore = 0;

    for (int i = 0; i < dice.size(); i++)
    {
        if (!scores[dice[i]])
        {
            scores[dice[i]] = 0;
        }
        scores[dice[i]]++;
    }

    for (int i = 0; i < dice.size(); i++)
    {
        while (scores[dice[i]] > 0)
        {
            bool isTriplet = scores[dice[i]] >= 3;
            totalScore += calculateDiceScore(dice[i], isTriplet);
            scores[dice[i]] -= isTriplet ? 3 : 1;
        }
    }

    return totalScore;
}

int main()
{
    std::cout << greedIsGood({2, 4, 4, 5, 4}) << std::endl;
    return 0;
}
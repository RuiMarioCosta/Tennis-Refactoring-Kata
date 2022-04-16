#include <string>

std::string get_player_score(int score_value)
{
    std::string score;
    switch (score_value)
    {
        case 0: score = "Love"; break;
        case 1: score = "Fifteen"; break;
        case 2: score = "Thirty"; break;
        case 3: score = "Forty"; break;
    }
    return score;
}

const std::string tennis_score(int p1Score, int p2Score)
{
    std::string score = "";
    if (p1Score == p2Score)
    {
        if (p1Score > 2)
            score = "Deuce";
        else
            score = get_player_score(p1Score) + "-All";
    }
    else if (p1Score >= 4 || p2Score >= 4)
    {
        int minusResult = p1Score - p2Score;
        if (minusResult == 1)
            score = "Advantage player1";
        else if (minusResult == -1)
            score = "Advantage player2";
        else if (minusResult >= 2)
            score = "Win for player1";
        else
            score = "Win for player2";
    }
    else
    {
        std::string score1 = get_player_score(p1Score);
        std::string score2 = get_player_score(p2Score);
        score              = score1 + "-" + score2;
    }

    return score;
}

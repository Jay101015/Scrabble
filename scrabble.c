#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int score(string user);
// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int main(void)
{
    // prompt user for word
    string user1 = get_string("Player 1: ");
    string user2 = get_string("Player 2: ");

    printf("Player 1 has entered: %s\n", user1);
    printf("Player 2 has entered: %s\n", user2);

    // Compute the score of each word
    int score1 = score(user1);
    int score2 = score(user2);

      if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if (score1 < score2)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}

int score(string user)
{
 // Keep track of score
    int score = 0;

    // Compute score for each character
    for (int i = 0, len = strlen(user); i < len; i++)
    {
        if (isupper(user[i]))
        {
            score += POINTS[user[i] - 'A'];
        }
        else if (islower(user[i]))
        {
            score += POINTS[user[i] - 'a'];
        }
    }

    return score;
}

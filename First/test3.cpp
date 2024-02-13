#include <iostream>
#include <vector>
#include <deque>
#include <cctype> // Include the cctype library for toupper()

using namespace std;

// Function to play a single game and return the winner or "draw"
string playGame(const vector<char>& player1, const vector<char>& player2) {
    deque<char> deck1(player1.begin(), player1.end());
    deque<char> deck2(player2.begin(), player2.end());
    
    // Play the game until one of the players runs out of cards
    while (!deck1.empty() && !deck2.empty()) {
        char card1 = deck1.front();
        char card2 = deck2.front();
        deck1.pop_front();
        deck2.pop_front();

        if (card1 == card2) {
            deck1.push_back(card1);
            deck2.push_back(card2);
        } else if (card1 > card2) {
            deck1.push_back(card2);
        } else {
            deck2.push_back(card1);
        }
    }
    
    if (deck1.empty() && deck2.empty()) {
        return "draw";
    } else if (deck1.empty()) {
        return "player 2";
    } else {
        return "player 1";
    }
}

int main() {
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        vector<char> player1, player2;
        string cards1, cards2;
        cin >> cards1 >> cards2;
        
        for (char card : cards1) {
            player1.push_back(toupper(card)); // Convert to uppercase
        }
        
        for (char card : cards2) {
            player2.push_back(toupper(card)); // Convert to uppercase
        }
        
        string winner = playGame(player1, player2);
        cout << winner << endl;
    }
    
    return 0;
}

#include <iostream>
// #include <vector>
// using namespace std;

// int check(vector<char>& deck1, vector<char>& deck2) {
//     while (!deck1.empty() && !deck2.empty()) {
//         char card1 = deck1[0];
//         char card2 = deck2[0];

//         deck1.erase(deck1.begin());
//         deck2.erase(deck2.begin());

//         if (card1 == card2) {
//             deck1.push_back(card1);
//             deck2.push_back(card2);
//         } else if (card1 == 'A' || (card1 > card2 && card2 != 'A')) {
//             deck1.push_back(card1);
//             deck1.push_back(card2);
//         } else {
//             deck2.push_back(card2);
//             deck2.push_back(card1);
//         }
//     }

//     if (deck1.empty()) {
//         return 2;
//     } else if (deck2.empty()) {
//         return 1;
//     } else {
//         return 0;  // Draw
//     }
// }

// int main() {
//     int n;
//     cin >> n;

//     for (int i = 0; i < n; i++) {
//         string deck1, deck2;
//         cin >> deck1 >> deck2;

//         vector<char> player1Deck(deck1.begin(), deck1.end());
//         vector<char> player2Deck(deck2.begin(), deck2.end());

//         int result = check(player1Deck, player2Deck);
//         if (result == 1) {
//             cout << "player 1" << endl;
//         } else if (result == 2) {
//             cout << "player 2" << endl;
//         } else {
//             cout << "draw" << endl;
//         }
//     }

//     return 0;
// }
# Function to determine the winner of a single game
def determine_winner(player1_deck, player2_deck):
    while player1_deck and player2_deck:
        card1 = player1_deck.pop(0)
        card2 = player2_deck.pop(0)

        if card1 == card2:
            player1_deck.append(card1)
            player2_deck.append(card2)
        elif card1 > card2:
            player1_deck.append(card2)
        else:
            player2_deck.append(card1)

    if not player1_deck:
        return "player 2"
    elif not player2_deck:
        return "player 1"
    else:
        return "draw"

# Read the number of games
n = int(input().strip())

# Iterate through each game
for _ in range(n):
    player1_deck = list(input().strip())
    player2_deck = list(input().strip())

    winner = determine_winner(player1_deck, player2_deck)
    print(winner)

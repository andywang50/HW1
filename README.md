# HW1


This is a single-player version of the card game known as 'siete y medio' (seven and a half), which is very similar in nature to the casino game of Blackjack (also known as 21). The goal of the game is to get cards whose total value comes the closest to 71/2 without going over it. Getting a card total over 71/2 is called "busting". 

When a player makes a bet against the dealer. There are 4 possible outcomes:

*The player comes closer to 71/2 than the dealer or the dealer busts but the player did not bust. 
In this case the player wins the round and the player's money increases by the amount that was bet.
*The dealer comes closer to 71/2 than the player, or the player busts.
In this case the player loses the round and the player's money decreases by the amount that was bet.
*Both, the player and dealer bust.
In this case the player loses the round and the player's money decreases by the amount that was bet. 
This is called house advantage. 
*Both the player and the dealer have the same total and  they do not bust.
In this case a tie is declared and no money is exchanged.


Example run:

Please enter a valid integer as your bet.
90
Player has card(s):
Tres of espadas
Sum of 3
Host has card(s):
Caballo of oros
Sum of 0.5
Do you want another card? (y/n)
n
Player wins
Player has money: 190
Host has money: 810
Please enter a valid integer as your bet.
190
Player has card(s):
Tres of espadas
Rey of bastos
Sum of 3.5
Host has card(s):
Caballo of oros
Seis of oros
Sum of 6.5
Do you want another card? (y/n)
n
Host wins
Player has money: 0
Host has money: 1000
Want to play another round? (y/n)
n
Bye Bye!

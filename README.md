# My CS50x Journey
This is a repository that keeps a record of my journey taking Harvard University's popular CS50x online course taught by David J. Malan.

## Week 0 - Scratch
For the problem set 0 project I created a game using scratch called ["Space Invasion"](https://github.com/safwanishere/CS50/blob/main/Week%200)
These are the instructions for the game:

> Space Invasion!
> 
> You control a rocket ship that can go left to right with the use of arrow keys or A and D keys on your keyboard. There is an invasion of random creatures with different speeds and killing points descending from above. Use the Space bar or the W key to shoot a laser. Your kill count and score is displayed on the top left.
> 
> key binds
> W - shoot
> A - move left
> D - move right
> spacebar - shoot

![image](https://github.com/user-attachments/assets/9956a934-2aa0-4c74-b374-77297e48d294)

## Week 1 - C
Introduced to the first programming language of the course, C. There were three questions in the problem set of this week. They were based on real life scenarios and problems and to be solved using the concepts of loops, variables, conditions and user inputs that were thought in the lecture videos.

### Hello, it's me
In a file called hello.c, in a folder called me, implement a program in C that prompts the user for their name and then says hello to that user. For instance, if the user’s name is Adele, your program should print hello, Adele\n!

### Mario
In a file called mario.c in a folder called mario-less, implement a program in C that recreates that pyramid, using hashes (#) for bricks, as in the below:
```
       #
      ##
     ###
    ####
   #####
  ######
 #######
########
```

### Cash
Suppose you work at a store and a customer gives you $1.00 (100 cents) for candy that costs $0.50 (50 cents). You’ll need to pay them their “change,” the amount leftover after paying for the cost of the candy. When making change, odds are you want to minimize the number of coins you’re dispensing for each customer, lest you run out (or annoy the customer!). In a file called cash.c in a folder called cash, implement a program in C that prints the minimum coins needed to make the given amount of change, in cents, as in the below:
```
Change owed: 70
4
```

## Week 2 - Arrays
Topics covered this week: Preprocessing. Compiling. Assembling. Linking. Debugging. Arrays. Strings. Command-Line Arguments. Cryptography.
Questions of the problem set 2 :

### Scrabble
In the game of Scrabble, players create words to score points, and the number of points is the sum of the point values of each letter in the word.
For example, if we wanted to score the word “CODE”, we would note that the ‘C’ is worth 3 points, the ‘O’ is worth 1 point, the ‘D’ is worth 2 points, and the ‘E’ is worth 1 point. Summing these, we get that “CODE” is worth 7 points.

In a file called scrabble.c in a folder called scrabble, implement a program in C that determines the winner of a short Scrabble-like game. Your program should prompt for input twice: once for “Player 1” to input their word and once for “Player 2” to input their word. Then, depending on which player scores the most points, your program should either print “Player 1 wins!”, “Player 2 wins!”, or “Tie!” (in the event the two players score equal points).

### Readability
According to Scholastic, E.B. White’s Charlotte’s Web is between a second- and fourth-grade reading level, and Lois Lowry’s The Giver is between an eighth- and twelfth-grade reading level. What does it mean, though, for a book to be at a particular reading level?

Well, in many cases, a human expert might read a book and make a decision on the grade (i.e., year in school) for which they think the book is most appropriate. But an algorithm could likely figure that out too!

In a file called readability.c in a folder called readability, you’ll implement a program that calculates the approximate grade level needed to comprehend some text. Your program should print as output “Grade X” where “X” is the grade level computed, rounded to the nearest integer. If the grade level is 16 or higher (equivalent to or greater than a senior undergraduate reading level), your program should output “Grade 16+” instead of giving the exact index number. If the grade level is less than 1, your program should output “Before Grade 1”.

### Substitution
In a substitution cipher, we “encrypt” (i.e., conceal in a reversible way) a message by replacing every letter with another letter. To do so, we use a key: in this case, a mapping of each of the letters of the alphabet to the letter it should correspond to when we encrypt it. To “decrypt” the message, the receiver of the message would need to know the key, so that they can reverse the process: translating the encrypt text (generally called ciphertext) back into the original message (generally called plaintext).

A key, for example, might be the string NQXPOMAFTRHLZGECYJIUWSKDVB. This 26-character key means that A (the first letter of the alphabet) should be converted into N (the first character of the key), B (the second letter of the alphabet) should be converted into Q (the second character of the key), and so forth.

A message like HELLO, then, would be encrypted as FOLLE, replacing each of the letters according to the mapping determined by the key.

In a file called substitution.c in a folder called substitution, create a program that enables you to encrypt messages using a substitution cipher. At the time the user executes the program, they should decide, by providing a command-line argument, on what the key should be in the secret message they’ll provide at runtime.

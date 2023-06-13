import random

def roll_dice():
    return random.randint(1, 6)

def dice_game():
    print("Rolling dice...")
    die1 = roll_dice()
    die2 = roll_dice()
    total = die1 + die2
    
    print(f"Die 1: {die1}")
    print(f"Die 2: {die2}")
    print(f"Total value: {total}")

    if total > 7:
        print("You won!")
    else:
        print("You lost.")

def greet_user():
    name = input("What is your name?\n> ")
    print(f"Hello, {name}!")

if __name__ == "__main__":
    greet_user()
    dice_game()
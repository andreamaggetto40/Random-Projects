
from random import randrange
import time

def print_title():
    print("\t\t\t WELCOME TO THIS NEW GAME,MY FRIEND!")  

def random_number(first,second):
    print("\t\t\tChoosing the right number for you :)\n")
    time.sleep(5)
    return randrange(first,second)

def game(random_number):    
    points = 5
    
    while(points > 0):
        user_number = int(input("Dear user,what's the number,according to you? :)"))

        if(user_number == random_number):
            print("Awesome!you won :)")
            break
        else:
            print("Nope,try again! :)") 
            points -= 1

            if(points == 0):
                print("sorry,you lost!")



#assume this is the main() method
print_title()

print("\t\t\tOkay,you're starting using 5 points :)")
first = int(input("\t\t\tInsert the first bound : "))
second = int(input("\t\t\tInsert the second bound : "))

choosed_number = random_number(first,second)

game(choosed_number)

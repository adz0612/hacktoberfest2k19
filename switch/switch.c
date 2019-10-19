

# Mycode

import sys
num = int(input("Enter a number"))
print("What do you wanna do?")
print("This is the following menu options\n");
print("----------1.Choose here for incrementing the number-----------------\n");
print("----------2.Choose here for decrementing the number-------------------\n");
print("----------3.EXIT THE PROGRAM----------------------------\n");
print("enter the choice");
choice = int(input("Choice: "))


def incr(x):
  x=x+1
  print(x)

def decr(x):
  x=x-2
  print(x)

if choice == 1:
  incr(num)
elif choice ==2:
  decr(num)
elif choice ==3:
  sys.exit()

else:
  print("Bad input")

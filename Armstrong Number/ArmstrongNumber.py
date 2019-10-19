


    #My code

 arm = input("Enter a number")
size = len(arm)
temp =0

if int(arm)<0:
    print("Bad input")
else:

    for i in range (size):
        temp = temp+int(arm[i])**(size)
    if temp == int(arm):
        print("Armstrong")
    else:
        print("Not Armstrong")

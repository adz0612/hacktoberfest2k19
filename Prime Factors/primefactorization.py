num = int(input(" Please Enter any Number: "))

for i in range(2, num + 1):
    if(num % i == 0):
        isprime = 1
        for j in range(2, (i //2 + 1)):
            if(i % j == 0):
                isprime = 0
                break
            
        if (isprime == 1):
            print(" %d " %(i))

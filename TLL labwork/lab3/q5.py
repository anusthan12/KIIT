a=int(input("enter  a number to reverse= "))

temp = 0
while(a>0):
    
    rem =int(a % 10)
    temp =int((temp * 10)+rem)
    a =int(a/10)


print("ANS= ",temp)
a=int(input("enter a three digit number= "))

b=a//100
b=b*100
c=a//10
d=c//10
d=d*10
b=b+d
b=b+a%10

print(b)
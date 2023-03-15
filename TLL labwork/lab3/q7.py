a = int(input("Enter a number: "))
s = 0
temp = a
while(temp > 0):
   d1 =int(temp % 10)
   s=s+ d1 ** 3
   temp=int(temp/10)

if a == s:
   print("Armstrong number")
else:
   print("Not Armstrong number")
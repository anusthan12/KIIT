print("enter number= ")
a=int(input())

x=a%10
x=x*100
a=a/10
a=a/10
a=int(a)
a=a-(a*100)
a=a+x;
y=a%10

print(x)
print(y)
print('ANS=',x+y)

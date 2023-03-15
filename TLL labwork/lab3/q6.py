a=int(input("Enter a number: "))  
s=0  
for i in range(1,a):  
    if (a%i==0):  
        s=s+i  
        
        
if(s==a):  
    print("perfect number")  
else:  
    print("Not a perfect number")  
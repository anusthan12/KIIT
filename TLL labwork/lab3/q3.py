a1=int(input("Enter subject 1= "))
a2=int(input("Enter subject 2= "))
a3=int(input("Enter subject 3= "))
a4=int(input("Enter subject 4= "))


tol= a1+a2+a3+a4

print("TOTAL SUM = ",tol)

print("PERCENTAGE= ",tol/4,"%")


x=tol/4

if(x>=90 and x<100):
    print("O grade")
elif(x>=80 and x<90):
    print("E grade")
elif(x>=70 and x<80):
    print("A grade")
elif(x>=60 and x<70):
    print("B grade")  
else:
    print("F grade")    
    

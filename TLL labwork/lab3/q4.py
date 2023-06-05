a1=int(input("Enter subject 1= "))
a2=int(input("Enter subject 2= "))
a3=int(input("Enter subject 3= "))
a4=int(input("Enter subject 4= "))


tol= a1+a2+a3+a4

print("TOTAL SUM = ",tol)

print("PERCENTAGE= ",tol/4,"%")


x=tol/4

avg=int(x/10)

match avg:
    case 9:
        print("O grade")
    case 8:
        print("E grade")
    case 7:
        print("A grade")  
    case 8:
        print("B grade")    
    case default:
        print("F grade")   
        
        
        
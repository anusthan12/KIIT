
a=int(input("Enter the nth number= "))
if(a==0):
    print("n=0 so no input")
if(a==1):
    print("n")
if(a>1):
    print("n ", end=" ")
    x=2
    for i in range(1,a):
        print("n-",x," ",end=" ")
        x=x+2

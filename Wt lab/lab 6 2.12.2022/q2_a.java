//Overloading By changing no. of arguments

class q2_a{  
static int add(int a,int b){return a+b;}  
static int add(int a,int b,int c){return a+b+c;}  
}  
class TestOverloading1{  
public static void main(String[] args){  
System.out.println(q2_a.add(10,10));  
System.out.println(q2_a.add(10,10,10));  
}
}  
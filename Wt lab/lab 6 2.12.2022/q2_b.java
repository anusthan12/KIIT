//Overloading By changing data type of arguments

class q2_b{  
static int add(int a, int b){return a+b;}  
static double add(double a, double b){return a+b;}  
}  
class TestOverloading2{  
public static void main(String[] args){  
System.out.println(q2_b.add(10,10));  
System.out.println(q2_b.add(11.3,11.6));  
}}  
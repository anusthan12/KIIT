class Anusthan {
   public void move() {
      System.out.println("My Name is Anusthan");
   }
}

class surname extends Anusthan {
   public void move() {
      System.out.println("And my surname is Singh");
   }
}

public class q3 {

   public static void main(String args[]) {
   
      Anusthan a = new Anusthan(); // Anusthan reference and object
      Anusthan b = new surname(); // Anusthan reference but Surname object
      // is essentially hidden in the parent class, and is not invoked unless the child class uses the super keyword within the overriding method 

      a.move(); 
      b.move(); 
   }
}
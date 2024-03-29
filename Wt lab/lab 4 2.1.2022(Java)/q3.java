
import java.util.Scanner;
public class q3 {
public static  void main(String[] args)
{
    int day =2;
    
    switch (day){
        case 1:
            System.out.println("sunday");
            break;
        case 2:
            System.out.println("monday");
            break;
        case 3:
            System.out.println("tuesday");
            break;
        case 4:
            System.out.println("wednesday ");
            break;
        case 5:
            System.out.println("thrusday ");
            break;
        case 6:
            System.out.println("friday ");
            break;
        case 7:
            System.out.println("saturday ");
            break;
        default:
            System.out.println("enter the correct day number");
    }
}

}
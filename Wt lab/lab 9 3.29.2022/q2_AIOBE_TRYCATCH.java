import java.util.*;
class q2_AIOBE_TRYCATCH
{   
    public static void main(String args[])
    {
        int i, a[] = {234, 43, 65, 70};
        try
        {
            for(i=0;i<5;i++)
            {
                System.out.print("|"+a[i]+"|");
            }
        }
        catch (ArrayIndexOutOfBoundsException e)
        {
            System.out.print("|Empty|");
        }
        finally
        {
            System.out.println();
            System.out.println("Please access elements only from within the given list of numbers.");
        }
    }
}
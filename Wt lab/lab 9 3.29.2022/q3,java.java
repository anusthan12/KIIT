import java.util.*;
class q3
{
    public static void ProcessInput(int num) throws NegativeNumberException
    {
        if(num<0)
        {
            throw new NegativeNumberException(num);
        }
        else
        {
            System.out.println("The Double of the entered number: "+(num+num));
        }
    }
    public static void main(String args[])
    {
        Scanner input = new Scanner(System.in);
        int num;
        System.out.println("Enter a number:");
        num = input.nextInt();
        try
        {
            ProcessInput(num);
        }
        catch (NegativeNumberException e)
        {
            System.out.println(e);
        }
        input.close();
    }
}
class NegativeNumberException extends Exception
{
    int e;
    NegativeNumberException(int num)
    {
        e = num;
    }
}
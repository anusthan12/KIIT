public class q4{
    public static void main(String[] args)
    {
        int n;
        int reverse=0;
        int rem;
        int original;
      
        n = 1001;
        original=n;
        while(n!= 0){
            rem = n%10;
            reverse = reverse *10 +rem;
            n/=10;

        }
        if(original == reverse){
            System.out.println(" Therefore, The Given number is palindrome: " +original );
        }
        else{
            System.out.println(" Therefore, The Given number is not palindrome: " +original);
        }

    }
}
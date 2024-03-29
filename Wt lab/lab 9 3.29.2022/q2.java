class q2
{
        public static void main(String[] args)
        {
                int i = 80, j = 4, k = 4;
                int answer;
                try
                {
                        answer = i / (j-k);
                        
                }
                catch (ArithmeticException ae)
                {
                        System.out.println("Cannot divided by zero."+ae);
                }
                finally
                {
                        System.out.println("finally block");
                }
                answer = i / (j+k);
                System.out.println("Answer: "+answer);
        }
}
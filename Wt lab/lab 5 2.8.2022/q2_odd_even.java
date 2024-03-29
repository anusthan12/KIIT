import java.io.*;
class q2_odd_even{
    public static void main(String[] args) {
        int i,n,even=0,odd=0;
        String input = " ";

        BufferedReader in = new BufferedReader ( new InputStreamReader(System.in));

        for(i = 1; i <=10; i++){
            try{
            System.out.print("Enter a number :"  );
                input = in.readLine();
               }
               catch(IOException e){
                System.out.println("Error! Run again");
               }

               n = Integer.parseInt(input);
               if(n % 2 == 0)
                even++; 
                else{
                    odd++;
                }
                 

        }System.out.println("EVEN: " + even + "\nODD: " +odd);
    }
}
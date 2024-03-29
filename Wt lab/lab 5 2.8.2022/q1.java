import java.io.*;
class q1{
    public static void main(String[] args) throws IOException {
        int a,b,c,larg;

        BufferedReader br= new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter any three Number");
        a=Integer.parseInt(br.readLine());
        b=Integer.parseInt(br.readLine());
        c=Integer.parseInt(br.readLine());

        if(a>b & a>c){
            larg=a;

        }
        else if(b>c)
        {
            larg=b;
        }
        else {
            larg=c;
        }
        System.out.println("The largest number is "+larg);       
    }
    
}
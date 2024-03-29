import java.io.*;
class Two
{
    int l,b;
    double area,rs;
    public void Details() throws IOException
    {
        InputStreamReader is = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(is);
        System.out.println("Enter the length of the 2D sheet: ");
        l = Integer.parseInt(in.readLine());
        System.out.println("Enter the bredth of the 2D sheet: ");
        b = Integer.parseInt(in.readLine());
    }
    public void disp()
    {
        area = l*b;
        rs = 40*area;
        System.out.println("The Area: "+area+ " square feet So, The Cost of the Sheet = Rs "+rs);
    }
}

class Three extends Two
{
    int h;
    public void Details() throws IOException
    {
        InputStreamReader is = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(is);
        System.out.println("2D Sheets conversion into 3D Boxes just by give a dimension ");
        System.out.println("Enter the height for the making of the 3D box: ");
        h = Integer.parseInt(in.readLine());
    }
    public void disp()
    {
        System.out.println("The Volume: "+(l*b*h)+ "cube feet ");
        System.out.println("The Cost of the Box: Rs "+(60*l*b*h));
    }
    public void getMsg() throws IOException
    {
        super.Details();
        Details();
    }
    public void prtMsg()
    {
        super.disp();
        disp();
    }
} 

class q1_plastic_rate
{
    public static void main(String[] args) throws IOException
    {
        Three obj = new Three();
        obj.getMsg();
        obj.prtMsg();
    }
}
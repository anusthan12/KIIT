import java.sql.*;
 public class test {
      public static void main(String[] args)
       {    
             try{
    Class.forName("com.mysql.cj.jdbc.Driver"); 
 Connection con=DriverManager.getConnection("jdbc:mysql://localhost:3306/anusthan", "root", "anusthan");
 System.out.println("Connection created");
 String query="create table student(roll int, name varchar(20))";
 Statement st=con.createStatement();
 System.out.println("Statement created");
 st.execute(query);
 System.out.println("Table created"); 
   } catch(Exception e) 
  {
             System.out.println(e); 
                    } } }
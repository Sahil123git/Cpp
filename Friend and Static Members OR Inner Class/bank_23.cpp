import java.util.*;
class CUSTOMER
{
    String Cust_Id;
    String CName;
    double CBalance;
    CUSTOMER(String Cust_Id, String CName, double CBalance)
    {
        this.Cust_Id = Cust_Id;
        this.CName = CName;
        this.CBalance = CBalance;
    }
    void display()
    {
        System.out.print(Cust_Id + " " + CName + " " + CBalance);
        System.out.println();
    }
public
    static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        CUSTOMER arrayobj[] = new CUSTOMER[5];
        for (int i = 0; i < 5; i++)
        {
            System.out.println("Enter the Id, Name and Balance respectively of Customer " + i + 1);
            String Cust_Id1 = sc.nextLine();
            String CName1 = sc.nextLine();
            double CBalance1 = sc.nextDouble();
            arrayobj[i] = new CUSTOMER(Cust_Id1, CName1, CBalance1);
            arrayobj[i].display();
        }
    }
}
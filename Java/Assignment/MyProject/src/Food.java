import java.util.Scanner;

public class Food 
{
    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);

        String[] items = {"Samosa", "Vada", "Dosa", "Idli"};
        double[] prices = {10, 20, 40, 30};

        System.out.println("Menu:");
        for (int i = 0; i < items.length; i++) 
        {
            System.out.println((i+1) + ". " + items[i] + " = " + prices[i]);
        }

        System.out.print("Enter the item number (1-" + items.length + "): ");
        int itemNumber = input.nextInt();

        System.out.print("Enter the quantity: ");
        int quantity = input.nextInt();

        if (itemNumber < 1 || itemNumber > items.length) 
        {
            System.out.println("Invalid item number.");
            return;
        }

        double totalPrice = prices[itemNumber-1] * quantity;

        System.out.println("\nBill:");
        System.out.println(items[itemNumber-1] + " x " + quantity + " = " + totalPrice);
    }
}
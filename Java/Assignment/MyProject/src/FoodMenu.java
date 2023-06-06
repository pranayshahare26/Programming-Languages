import java.util.Scanner;

public class FoodMenu 
{
    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);

        //menu with fixed prices
        double samosaPrice = 10;
        double vadaPrice = 30;
        double dosaPrice = 40;

        // Display the menu to the user
        System.out.println("MENU");
        System.out.println("1. Samosa = " + samosaPrice);
        System.out.println("2. Vada = " + vadaPrice);
        System.out.println("3. Dosa = " + dosaPrice);

        // User to their items
        System.out.print("Enter the item numbers you should like to order : ");
        String items = input.nextLine();

        // Split the user's input into individual item numbers
        String[] itemNumbers = items.split(",");

        // Calculate the total price
        double totalPrice = 0;
        for (String itemNumber : itemNumbers) {
            int item = Integer.parseInt(itemNumber.trim());
            switch (item) {
                case 1:
                    totalPrice += samosaPrice;
                    break;
                case 2:
                    totalPrice += vadaPrice;
                    break;
                case 3:
                    totalPrice += dosaPrice;
                    break;
                default:
                    System.out.println("Invalid item number: " + item);
                    return;
            }
        }

        // Display the generated bill
        System.out.println("BILL");
        for (String itemNumber : itemNumbers) 
        {
            int item = Integer.parseInt(itemNumber.trim());
            switch (item) 
            {
                case 1:
                    System.out.println("Samosa = " + samosaPrice);
                    break;
                case 2:
                    System.out.println("Vada = " + vadaPrice);
                    break;
                case 3:
                    System.out.println("Dosa = " + dosaPrice);
                    break;
            }
        }
        System.out.println("Total = " + totalPrice);
    }
}
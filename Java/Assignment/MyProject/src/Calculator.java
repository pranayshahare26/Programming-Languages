import java.util.Scanner;

public class Calculator 
{
    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);

        System.out.print("Enter the first number: ");
        double num1 = input.nextDouble();

        System.out.print("Enter the second number: ");
        double num2 = input.nextDouble();

        System.out.print("Enter your choice (+, -, *, /): ");
        char choice = input.next().charAt(0);

        double result;

        switch(choice) 
        {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                result = num1 / num2;
                break;
            default:
                System.out.println("Invalid choice.");
                return;
        }
        System.out.println(num1 + " " + choice + " " + num2 + " = " + result);
    }
}
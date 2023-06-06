public class Recursive 
{
    public static void main(String[] args) 
    {
        int n = 10;
        printHelloWorld(n);
    }

    public static void printHelloWorld(int n) 
    {
        if (n > 0) 
        {
            System.out.println("Hello World");
            printHelloWorld(n-1);
        }
    }
}
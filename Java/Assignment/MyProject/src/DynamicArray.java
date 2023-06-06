import java.util.ArrayList;

public class DynamicArray 
{
    public static void main(String[] args) 
    {
        ArrayList<Integer> numbers = new ArrayList<>(10); // initial capacity of 10

        // add elements to the ArrayList
        for (int i = 0; i < 20; i++) 
        {
            if (i == numbers.size()) 
            { // increase capacity when needed
                numbers.ensureCapacity(numbers.size()*2);
            }
            numbers.add(i);
        }

        // print the ArrayList
        System.out.println(numbers);
    }
}
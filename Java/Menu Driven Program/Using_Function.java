import java.util.*;

class Function {
    static Scanner scanner = new Scanner(System.in);
    static double l, b, s, r, ar;
    static double pi = 3.14;
    static int choice = 0;

    public static void main(String[] args) {
        System.out.println("1. For the area of square");
        System.out.println("2. For the area of reactangle");
        System.out.println("3. For the area of circle");
        System.out.println("4. Quit");
        choice = scanner.nextInt();

        switch(choice){
            case 1:
                square();
                break;
            case 2:
                reactangle();
                break;
            case 3:
                circle();
                break;
            case 4:
                System.exit(0);
            default:
                System.out.println("You have inputted the invalid choice\n");
        }
    }
    public static void square(){
        System.out.println("Enter the side of the square");
        s=scanner.nextDouble();
        ar = s*s;
        System.out.println("Area of the Square is: = "+ar + "square unit");  
    }

    public static void reactangle(){
        System.out.println("Enter the length of the rectangle");
        s=scanner.nextDouble();
        System.out.println("Enter the breadth of the rectangle");
        b=scanner.nextDouble();
        ar = l*b;
        System.out.println("Area of the rectangle is: = "+ar + "square unit");
    }

    public static void circle(){
        System.out.println("Enter the radius of the circle");
        r=scanner.nextDouble();
        ar=pi*r*r;
        System.out.println("Tne area of the circle = "+ar + "square unit");
    }
}
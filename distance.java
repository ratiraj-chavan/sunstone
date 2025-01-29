import java.util.Scanner;

public class distance{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double km;
        double miles;

        // Display menu and take user input
        // TODO: Implement menu logic here
        System.out.println("Welcome to Distance Converter!");
        System.out.println("Choose an option:");
        System.out.println("1. Convert Kilometers to Miles");
        System.out.println("2. Convert Miles to Kilometers");
         if (scanner.hasNextInt()) {
            int c = scanner.nextInt();

            switch (c) {
                case 1 -> {
                    System.out.print("Enter distance in kilometers: ");
                    if (scanner.hasNextDouble()) {
                        km = scanner.nextDouble();
                        miles = km * 0.621371;
                        System.out.println("Distance in miles: " + miles);
                    } else {
                        System.out.println("Invalid input! Please enter a numeric value for kilometers.");
                    }
                }
                case 2 -> {
                    System.out.print("Enter distance in miles: ");
                    if (scanner.hasNextDouble()) {
                        miles = scanner.nextDouble();
                        km = miles / 0.621371;
                        System.out.println("Distance in kilometers: " + km);
                    } else {
                        System.out.println("Invalid input! Please enter a numeric value for miles.");
                    }
                }
                default -> System.out.println("Invalid choice! Please enter 1 or 2.");
            }
        } else {
            System.out.println("Invalid input! Please enter 1 or 2.");
        }
        scanner.close();
    }
}
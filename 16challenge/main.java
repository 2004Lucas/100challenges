import java.util.Scanner;

public class LifeExpectancy {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Number of cigarettes smoked per day: ");
        int cigarettesPerDay = scanner.nextInt();
        System.out.print("Number of years smoking: ");
        int yearsSmoking = scanner.nextInt();
        scanner.close();

        int minutesLostPerCigarette = 10;
        int minutesLostPerDay = cigarettesPerDay * minutesLostPerCigarette;
        double daysLostPerYear = (double) minutesLostPerDay / (24 * 60);
        double totalDaysLost = daysLostPerYear * yearsSmoking;
        System.out.println("The smoker will lose a total of " + totalDaysLost + " days of life.");
    }
}

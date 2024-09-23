import java.util.*;

public class Percentage {
    public static void main(String[] args) {
        Scanner Sc = new Scanner(System.in);

        System.out.println("Enter your PHYSICS Marks:");
        int PHYSICS = Sc.nextInt();

        System.out.println("Enter your MATHEMATICS Marks:");
        int MATHEMATICS = Sc.nextInt();

        System.out.println("Enter your HINDI Marks:");
        int HINDI = Sc.nextInt();

        System.out.println("ENter your ENGLISH Marks:");
        int ENGLISH = Sc.nextInt();

        System.out.println("ENter your SCIENCE Marks:");
        int SCIENCE = Sc.nextInt();

        float percentage = ((PHYSICS + MATHEMATICS + HINDI + ENGLISH + SCIENCE) * 100) / 500;
        System.out.print("PERCENTAGE: ");
        System.out.println(percentage);

    }

}
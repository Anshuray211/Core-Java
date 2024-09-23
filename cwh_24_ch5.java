public class cwh_24_ch5 {
    public static void main(String[] args) {
        // for (int i = 0; i < 5; i++) {

        // if (i == 2) {
        // System.out.println("Ending the loop");
        // break;
        // }

        // }
        for (int i = 0; i < 20; i++) {
            if (i == 3) {
                System.out.println("Ending the loop");
                continue;
            }
            System.out.println(i);
            System.out.println("java is great");
        }
    }
}

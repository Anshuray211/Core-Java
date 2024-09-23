public class cwh_ch6_26 {
    public static void main(String[] args) {
        // int[] marks = new int[5];
        // marks[0] = 30;
        // marks[1] = 33;
        // marks[2] = 55;
        // marks[3] = 88;
        // marks[4] = 90;
        // System.out.println(marks[3]);

        // int[] marks = { 100, 33, 44, 54, 67, };
        // System.out.println(marks[4]);
        // System.out.println(marks.length);

        // displaying the Array (for loop)

        // for (int i = 0; i < marks.length; i++) {
        // System.out.println(marks[i]);
        // }

        // reverse wise array ;

        // for (int i = marks.length - 1; i >= 0; i--) {
        // System.out.println(marks[i]);
        // }

        // for-each loop using;
        // System.out.println("for-each loop");
        // for (int element : marks) {
        // System.out.println(element);
        // }

        // making 2-dimentional array
        int[] marks; // A 1-D Array
        int[][] flats; // A 2-D Array
        flats = new int[2][3];
        flats[0][0] = 101;
        flats[0][1] = 102;
        flats[0][2] = 103;
        flats[1][0] = 201;
        flats[1][1] = 202;
        flats[1][2] = 203;
        // Dispalying 2-D arry;
        System.out.println("Printing a 2-D array using dor loop");
        for (int i = 0; i < flats.length; i++) {
            for (int j = 0; j < flats[i].length; j++) {
                System.out.print(flats[i][j]);
                System.out.print("\t");
            }
            System.out.println("\n");
        }

    }

}

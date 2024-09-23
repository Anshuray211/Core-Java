public class cwh_35_ch7_practices_uestion {
  static void multiplaction(int n) {
    for (int i = 1; i <= 10; i++) {
      System.out.format("%d x %d = %d\n", n, i, n * i);
    }
  }

  public static void main(String[] args) {
   multiplaction(6);
   }

  problems:2

  static void pattern1(int n) {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < i + 1; j++) {
        System.out.print("*");
      }
      System.out.println();
    }

  }

  public static void main(String[] args) {

   pattern1(10);
   }

  problem:3;

  static int sumRec(int n) {
   if (n == 1) {
   return 1;
   }
   return n + sumRec(n-1);
   }

  public static void main(String[] args) {
   int c = sumRec(5);
   System.out.println(c);
   }problem:4

  static void pattern(int n) {
    for (int i = 0; i < n; i++) {
      for (int j = n; j > i; j--) {
        System.out.print("*");

      }
      System.out.println();
    }
  }

  public static void main(String[] args) {
   pattern(5);
   }

  problem:5

}

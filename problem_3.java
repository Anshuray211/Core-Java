public class problem_3 {
    public static void main(String[] args) {
        // problem_1
        String name = "Anshu Kumar Ray";
        name = name.toLowerCase();
        System.out.println(name);
        // problem_2
        String text = "I Am Student";
        text = text.replace(" ", "_");
        System.out.println(text);
        // problem_3
        String letter = "Dear <|name|>,thanks a lot";
        letter = letter.replace("<|name|>", "Anshu");
        System.out.println(letter);
        // problem_4
        String mystring = "this string contain double and  triple spaces";
        System.out.println(mystring.indexOf("  "));
        System.out.println(mystring.indexOf("   "));
        // problem_5
        String myletter = "Dear Anshu,\n\t this java course is Nice.\n\t Thanks!\n";
        System.out.println(myletter);
    }
}

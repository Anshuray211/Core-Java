import java.io.IOException;

public class shutdown {
    public static void main(String[] args) {
        try {
            // shutdown
            Runtime.getRuntime().exec("shutdown /s /t 1");
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
import java.util.Scanner;;

public class Circle {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        float x1 = sc.nextFloat();

        float y1 = sc.nextFloat();
        float r = sc.nextFloat();
        float x2 = sc.nextFloat();
        float y2 = sc.nextFloat();

        float d = (float) (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);

        boolean isOn = d == r * r;
        boolean is_in = d < r * r;

        System.out.println(isOn ? "yes" : is_in ? "yes" : "no");

        sc.close();
    }
}

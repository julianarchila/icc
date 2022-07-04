import java.util.Scanner;

public class Prom {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        float nl[] = new float[4];

        for (int i = 0; i < 4; i++) {
            nl[i] = sc.nextFloat();
        }

        float min = nl[0];
        for (int i = 1; i < 4; i++) {
            if (nl[i] < min) {
                min = nl[i];
            }
        }

        float sum = 0 - min;
        for (int i = 0; i < 4; i++) {
            sum += nl[i];
        }

        float prom = sum / 3;

        // print prom with 2 decimals
        System.out.printf("%.2f", prom);

        sc.close();
    }
}
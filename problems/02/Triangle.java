import java.util.Scanner;

public class Triangle {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int l1 = sc.nextInt();
        int l2 = sc.nextInt();
        int l3 = sc.nextInt();

        int max = Math.max(l1, Math.max(l2, l3));
        int sides = l1 + l2 + l3 - max;

        // check if the triangle is valid
        if (max > sides) {
            System.out.println("No es triangulo");
            sc.close();
            return;
        }

        // check if the triangle is equilateral
        if (l1 == l2 && l2 == l3) {
            System.out.println("Equilatero");
        } else if (l1 == l2 || l2 == l3 || l1 == l3) {
            System.out.println("Isosceles");
        } else {
            System.out.println("Escaleno");
        }

        sc.close();

    }
}
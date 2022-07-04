import java.util.Scanner;

public class Test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int rows = sc.nextInt();
        int colums = sc.nextInt();

        int[][] arr2D = initArray(rows, colums);
        printArray(arr2D);

        fillArray(arr2D, 5);
        printArray(arr2D);
        fillArray(arr2D, 3);
        printArray(arr2D);

        sc.close();
    }

    public static int[][] initArray(int r, int c) {
        int[][] arr = new int[r][c];
        return arr;
    }

    public static void fillArray(int[][] arr, int v) {
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr[i].length; j++) {
                arr[i][j] = v;
            }
        }
    }

    public static void printArray(int[][] arr) {
        System.out.println("Printing array .....");
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr[i].length; j++) {
                System.out.printf("%d\t", arr[i][j]);
            }
            System.out.printf("\n");
        }
        System.out.println("Done priting .......\n");
    }
}

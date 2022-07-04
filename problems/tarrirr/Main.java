import java.util.Scanner;

public class Main {
    static Scanner sc = new Scanner(System.in);

    public static void main(String[] args) {
        int n1 = sc.nextInt();

        int[][] arreglo2D = crearArreglo2D(n1);

        leerArreglo2D(arreglo2D);
        imprimirArreglo2D(arreglo2D);

        int max_f = hallarMaximoNumDeColumnas(arreglo2D);
        System.out.println(max_f);

        int[] sumas = hallarSumaPorColumna(arreglo2D);
        imprimirArreglo(sumas);

        sc.close();
    }

    public static int[][] crearArreglo2D(int n) {
        int[][] arreglo = new int[n][];
        for (int i = 0; i < n; i++) {
            int f = sc.nextInt();
            arreglo[i] = new int[f];
        }
        return arreglo;
    }

    public static void leerArreglo2D(int[][] arr2D) {
        for (int i = 0; i < arr2D.length; i++) {
            for (int j = 0; j < arr2D[i].length; j++) {
                int new_val = sc.nextInt();
                arr2D[i][j] = new_val;
            }
        }
    }

    public static void imprimirArreglo2D(int[][] arr2D) {
        for (int i = 0; i < arr2D.length; i++) {
            for (int j = 0; j < arr2D[i].length; j++) {
                System.out.printf("%d\t", arr2D[i][j]);
            }
            System.out.printf("\n");
        }
    }

    public static void imprimirArreglo(int[] arr) {
        for (int i = 0; i < arr.length; i++) {
            System.out.printf("%d\t", arr[i]);
        }
        System.out.printf("\n");
    }

    public static int hallarMaximoNumDeColumnas(int[][] arr2D) {
        int max = 0;

        for (int i = 0; i < arr2D.length; i++) {
            if (arr2D[i].length > max) {
                max = arr2D[i].length;
            }
        }
        return max;
    }

    public static int[] hallarSumaPorColumna(int[][] arr2D) {
        int[] sumaPorColumna = new int[hallarMaximoNumDeColumnas(arr2D)];
        for (int i = 0; i < arr2D.length; i++) {
            for (int j = 0; j < arr2D[i].length; j++) {
                if (arr2D[i][j] != 0) {
                    sumaPorColumna[j] += arr2D[i][j];
                }
            }
        }
        return sumaPorColumna;
    }

}

// import javax.swing.JOptionPane; // MODULE BUAT MESSAGE BOX
import java.util.Scanner; // MODULE CHARACTER INPUTi

// MENCARI RERATA DARI 3 VARIABEL

public class javaenco {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        System.out.println("Masukan tiga angka : ");
        double a = in.nextDouble();
        double b = in.nextDouble();
        double c = in.nextDouble();

        double rerata = (a + b + c) / 3;

        System.out.println("Rerata dari " + a + "" + b + "" + c + " adalah " + rerata);
        // System.out.println((9.5 * 4.5 - 2.5 * 3 / 45.5 -3.5));
        // System.out.println((1+2+3+4+5+6+7+8+9));

        // JOptionPane.showMessageDialog(null, "Luas lingkaran dengan radius " + radius +  " adalah " + luas, "luas lingkaran", JOptionPane.INFORMATION_MESSAGE);
    }
}
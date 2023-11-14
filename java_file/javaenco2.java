//import javax.swing.JOptionPane; // MODULE BUAT MESSAGE BOX
import java.util.Scanner; // MODULE CHARACTER INPUTi

// MERUBAH DETIK MENJADI MENIT

public class javaenco2 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
            System.out.println("Masukan integer detik : ");
            int detik = in.nextInt();
            int menit = detik / 60;
            int sisaDetik = detik % 60;
            System.out.println(detik + " detik adalah " + menit + " menit dan " + sisaDetik + " detik");
        }
}
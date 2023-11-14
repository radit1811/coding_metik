//import javax.swing.JOptionPane; // MODULE BUAT MESSAGE BOX
//import java.util.Scanner; // MODULE CHARACTER INPUTi

// MERUBAH FAHRENHEIT KE CELCIUS

import java.util.Scanner;

public class javaenco3 {
    public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
        System.out.println("Masukan derajat Fahrenheit : ");
        double fahrenheit = in.nextDouble();
        double celcius = (5.0 / 9) * (fahrenheit - 32);
        System.out.println("Fahrenheit " + fahrenheit + " adalah " + celcius + " dalam Celccius");
    }
}
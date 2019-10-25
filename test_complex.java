package Package2;
import java.util.Scanner;
public class test_complex {
    public static void main(String[] args) {
        Complex complex = new Complex();
        double Z;
        Scanner scan = new Scanner(System.in);
        complex.Im = scan.nextInt();
        complex.Rez = scan.nextInt();
        System.out.println("Enter Im = " + complex.Im);
        System.out.println("Enter Rez = " + complex.Rez);
        double arg, fi, x, y, Sum, Raznost;

        System.out.println("Cos(fi) = " + Math.cos(Math.toRadians ((complex.Rez) / ((double) Math.sqrt((complex.Rez * complex.Rez) + (complex.Im * complex.Im))))));
        System.out.println("Sin(fi) = " + Math.cos(Math.toRadians ((complex.Im) / ((double) Math.sqrt((complex.Rez * complex.Rez) + (complex.Im * complex.Im))))));
        fi = (Math.toDegrees(Math.cos(Math.toRadians((complex.Rez) / ((double) Math.sqrt((complex.Rez * complex.Rez) + (complex.Im * complex.Im)))))));
        System.out.println("Arg(in degrees) = " + fi);
        Sum = complex.Rez + complex.Im;
        System.out.println("X = " + (Math.sqrt((complex.Rez * complex.Rez) + (complex.Im * complex.Im)) * (Math.cos(Math.toRadians ((complex.Rez) / ((double) Math.sqrt((complex.Rez * complex.Rez) + (complex.Im * complex.Im))))))));
        System.out.println("Y = " + (Math.sqrt((complex.Rez * complex.Rez) + (complex.Im * complex.Im))) *Math.cos(Math.toRadians ((complex.Im) / ((double) Math.sqrt((complex.Rez * complex.Rez) + (complex.Im * complex.Im))))));
        System.out.println("Sum = " + Sum);

        Raznost = complex.Rez - complex.Im;
        System.out.println("Raznost = " + Raznost );
        Z = (double) Math.sqrt((complex.Rez * complex.Rez) + (complex.Im * complex.Im));
        System.out.println("Module = " + Z);
    }
}

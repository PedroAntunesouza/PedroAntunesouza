import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JOptionPane;

public class Calculadora {
    public static void main ( String [] args ) {
        String entrada1 = JOptionPane.showInputDialog ( "digite um numero" );
    double n1 = Double.parseDouble ( entrada1 );
        String operador;
             while ( true ) {
                operador = JOptionPane.showInputDialog ( "Digite o operador (* / - +)" );
                 if ( operador.equals ("+") ||
                      operador.equals ("/") ||
                      operador.equals ("*") ||
                      operador.equals ("-") ) {
                 break; }
        JOptionPane.showMessageDialog ( null , "operador inválido" );
                            }
        String entrada2 = JOptionPane.showInputDialog ( "digite outro número" );
    double n2 = Double.parseDouble ( entrada2 );
                double resultado = 0;
                Boolean opValida = true;
                            switch ( operador ) {
                                case "+":
                                     resultado = n1 + n2;
                                        break;
                                case "-":
                                     resultado = n1 - n2;
                                        break;   
                                case "*":
                                     resultado = n1 * n2;
                                        break;
                                case "/":
                                if ( n2 !=0 || n1 !=0 ) {
                                     resultado = n1 / n2;
                                } else {
                                    JOptionPane.showMessageDialog ( null , "operação invalida" );
                                        opValida = false;
                                } break;      
                            }
    if (opValida) {
        JOptionPane.showMessageDialog ( null, n1 + " " + operador + " " + n2 + "= " + resultado );
        }
    }
}

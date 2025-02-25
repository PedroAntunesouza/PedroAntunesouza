import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JOptionPane;

public class Calculadora {
    public static void main ( String [] args ) {
        try{
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
                                if ( n1 ==0 || n2 ==0 ) {
                                     JOptionPane.showMessageDialog ( null , "operação invalida" );
                                    opValida = false;
                                } else {
                                     resultado = n1 / n2;
                                } break;      
                            }
            if (opValida) {
                JOptionPane.showMessageDialog ( null, n1 + " " + operador + " " + n2 + "= " + resultado );
                }
        

        }catch(Exception e){
            JOptionPane.showMessageDialog(null, "Erro! (" + e.getMessage() + ")");
        }
    }
}

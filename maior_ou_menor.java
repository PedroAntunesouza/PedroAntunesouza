import javax.swing.JOptionPane;

public class MaiorMenor {
    public static void main ( String [] args ) {
        String digita =
            JOptionPane.showInputDialog( "digite um numero: " );
            int n1 = Integer.parseInt( digita );
        digita =
            JOptionPane.showInputDialog( "digite outro numero: " );
            int n2 = Integer.parseInt( digita );
                if ( n1 > n2 ) {
                    JOptionPane.showMessageDialog( null, n1 + " é maior" ); 
                }
                else if ( n1 == n2 ) {
                    JOptionPane.showMessageDialog( null, "os números são iguais" );
                }  else {
                    JOptionPane.showMessageDialog( null, n2 + " é maior" );
                }
    }
}

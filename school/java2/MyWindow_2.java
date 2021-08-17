import java.awt.*;
import java.awt.event.*;

class MyFrame extends Frame implements WindowListener{

    MyFrame(){
        this.addWindowListener(this);
        this.setSize(300,400);
        this.setVisible(true);
    }

    public void windowOpened(WindowEvent e){}
    public void windowClosing(WindowEvent e){
        System.exit(0);
    }
    public void windowClosed(WindowEvent e){}
    public void windowIconified(WindowEvent e){}
    public void windowDeiconified(WindowEvent e){}
    public void windowActivated(WindowEvent e){}
    public void windowDeactivated(WindowEvent e){}

}

public class MyWindow_2 {

    public static void main(String[] args) {

           new MyFrame();

    }

}
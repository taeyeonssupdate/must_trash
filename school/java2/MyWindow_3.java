import java.awt.*;

import java.awt.event.*;

class MyFrame extends Frame {

    MyFrame() {
        this.setSize(300, 400);
        this.setVisible(true);
        this.addWindowListener(new WindowAdapter() {
            @Override
            public void windowClosing(WindowEvent e) {
                System.exit(0);
            }
        });
    }

}

public class MyWindow_3 extends WindowAdapter {

    public static void main(String[] args) {

        new MyFrame().addWindowListener(new MyWindow_3());

    }

}
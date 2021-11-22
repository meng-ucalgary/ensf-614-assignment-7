/**
 * File Name:               Text.java
 * Course:                  ENSF 614 - Fall 2021
 * Lab # and Assignment #:  Lab 7 Exercise A and B
 * Lab section:             B01
 * Completed by:            Aastha Patel, Bhavyai Gupta
 * Submission Date:         November 23, 2021
 */

import java.awt.*;

public class Text implements Component {
    protected int x;
    protected int y;
    protected String text;

    public Text(String text, int x, int y) {
        this.text = text;
        this.x = x;
        this.y = y;
    }

    @Override
    public void draw(Graphics g) {
        Graphics2D g2d = (Graphics2D) g;
        int fontSize = 8;
        g2d.setFont(new Font("Lucida Console", Font.PLAIN, fontSize));
        g2d.setColor(Color.GREEN);
        g2d.drawString(this.text, this.x, this.y);
    }
}

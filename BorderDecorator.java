/**
 * File Name:               BorderDecorator.java
 * Course:                  ENSF 614 - Fall 2021
 * Lab # and Assignment #:  Lab 7 Exercise A and B
 * Lab section:             B01
 * Completed by:            Aastha Patel, Bhavyai Gupta
 * Submission Date:         November 23, 2021
 */

import java.awt.*;

public class BorderDecorator extends Decorator {
    public BorderDecorator(Component cmp, int x, int y, int width, int height) {
        this.cmp = cmp;
        this.x = x;
        this.y = y;
        this.width = width;
        this.height = height;
    }

    @Override
    public void draw(Graphics g) {
        this.cmp.draw(g);

        Stroke dashed = new BasicStroke(3, BasicStroke.CAP_BUTT, BasicStroke.JOIN_BEVEL, 0, new float[] { 9 }, 0);
        Graphics2D g2d = (Graphics2D) g;
        g2d.setColor(Color.BLACK);
        g2d.setStroke(dashed);
        g2d.drawRect(this.x, this.y, this.width, this.height);
    }
}

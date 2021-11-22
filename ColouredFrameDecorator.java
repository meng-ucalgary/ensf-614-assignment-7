/**
 * File Name:               ColouredFrameDecorator.java
 * Course:                  ENSF 614 - Fall 2021
 * Lab # and Assignment #:  Lab 7 Exercise A and B
 * Lab section:             B01
 * Completed by:            Aastha Patel, Bhavyai Gupta
 * Submission Date:         November 23, 2021
 */

import java.awt.*;

public class ColouredFrameDecorator extends Decorator {
    private int thickness;

    public ColouredFrameDecorator(Component cmp, int x, int y, int width, int height, int thickness) {
        this.cmp = cmp;
        this.x = x;
        this.y = y;
        this.width = width;
        this.height = height;
        this.thickness = thickness;
    }

    @Override
    public void draw(Graphics g) {
        this.cmp.draw(g);
        Graphics2D g2d = (Graphics2D) g;
        Stroke oldStroke = g2d.getStroke();
        Color oldColor = g2d.getColor();
        g2d.setStroke(new BasicStroke(this.thickness));
        g2d.setColor(Color.red);
        g2d.drawRect(this.x, this.y, this.width, this.height);
        g2d.setStroke(oldStroke);
        g2d.setColor(oldColor);
    }
}

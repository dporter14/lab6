#include <iostream>

void showName(Rect &r)
{
        ggprint8b(&r, 10, 0x00ffff00, "David Porter");
}

void drawBox(int x, int y)
{
        static float angle = 0.0;
        glPushMatrix();
        glColor3f(0.1f,0.5f,0.5f);
        glTranslatef(x,y,0);
        glRotatef(angle, 0.0f,0.0f,1.0f);
        glTranslatef(-50,-50,0);
        angle += 2.5;
        glBegin(GL_QUADS);
                glVertex2i(  0,  0);
                glVertex2i(  0,100);
                glVertex2i(100,100);
                glVertex2i(100,  0);
        glEnd();
        Rect r;
        r.bot = 50;
        r.left = 50;
        r.center = 1;
        ggprint8b(&r, 16, 0x00ffffff, "David P.");
        glPopMatrix();
}

#include<windows.h>
#include <GL/glut.h>
void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    // glPointSize(10);           // Point size (pixels)
    glBegin(GL_POINTS);         // Start drawing points
    glVertex2f(-0.5, 0.0);
    glEnd();
    
    // glBegin(GL_LINES);
    //  glVertex2f(-0.5,0.0);
    // glVertex2f(-0.5,0.5);
    // glEnd();

        // star at top right co-ordinate
        glColor3f(0.3, 0.5, 1.0);
        glBegin(GL_POLYGON);
        glVertex2f(0.2,0.4);
        glVertex2f(0.3,0.6);
        glVertex2f(0.4,0.4);
        glVertex2f(0.6,0.3);
        glVertex2f(0.4,0.2);
        glVertex2f(0.3,0.0);
        glVertex2f(0.2,0.2);
        glVertex2f(0.0,0.3);
        glEnd();

        // star at top left co-ordinate
        glColor3f(0.4, 0.5, 1.0);
        glBegin(GL_POLYGON);
        glVertex2f(-0.4,0.4);
        glVertex2f(-0.3,0.6);
        glVertex2f(-0.2,0.4);
        glVertex2f(0.0,0.3);
        glVertex2f(-0.2,0.2);
        glVertex2f(-0.3,0.0);
        glVertex2f(-0.4,0.2);
        glVertex2f(-0.6,0.3);
        glEnd();

        // star at bottom right co-ordinate
        glColor3f(0.5, 0.5, 1.0);
        glBegin(GL_POLYGON);
        glVertex2f(0.2,-0.2);
        glVertex2f(0.3,0.0);
        glVertex2f(0.4,-0.2);
        glVertex2f(0.6,-0.3);
        glVertex2f(0.4,-0.4);
        glVertex2f(0.3,-0.6);
        glVertex2f(0.2,-0.4);
        glVertex2f(0.0,-0.3);
        glEnd();

        // star at bottom left co-ordinate
        glColor3f(0.9, 0.5, 1.0);
        glBegin(GL_POLYGON);
        glVertex2f(-0.4,-0.2);
        glVertex2f(-0.3,0.0);
        glVertex2f(-0.2,-0.2);
        glVertex2f(0.0,-0.3);
        glVertex2f(-0.2,-0.4);
        glVertex2f(-0.3,-0.6);
        glVertex2f(-0.4,-0.4);
        glVertex2f(-0.6,-0.3);
        glEnd();



    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);                       // Initialize GLUT
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); // Display mode (Single buffer + RGB)
    glutInitWindowSize(500, 500);                // Window size (width, height)
    glutInitWindowPosition(100, 100);            // Window position on screen
    glutCreateWindow("Line Drawing");  // Create window with title
    glutDisplayFunc(display);  // Register display function (callback)
    glutMainLoop();            // Enter the main event loop (keeps window open)
    return 0;
}



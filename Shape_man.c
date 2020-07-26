/*


*/


#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>

float roundShape(float x, float y,float cX , float sY)
{       float i;
        float theta = 0;
        for(i=0;i<360;i++)
        {
            theta=i*3.142/180;
            glVertex2f(x+cX*cos(theta),y+sY*sin(theta));
        }
}

void display(void)
{

    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0,  1.0,    1.0);

    /*------------BODY------------*/
    glColor3f(1.0,  0.0,    0.0);
    glBegin(GL_QUADS);
    glVertex3f(0.39f,   0.50f,  0.00f);
    glVertex3f(0.56f,   0.50f,  0.00f);
    glVertex3f(0.56f,   0.65f,  0.00f);
    glVertex3f(0.39f,   0.65f,  0.00f);
    glEnd();


    /*------------LEFT LEG------------*/
    glBegin(GL_QUADS);
    glColor3f(1.0,  1.0,    0.0);
    glVertex3f(0.40f,   0.39f,  0.00f);
    glVertex3f(0.44f,   0.39f,  0.00f);
    glVertex3f(0.480f,   0.50f,  0.00f);
    glVertex3f(0.40f,   0.50f,  0.00f);
    glEnd();


    /*------------RIGHT LEG------------*/

    glBegin(GL_QUADS);
    glColor3f(1.0,  1.0,    0.0);
    glVertex3f(0.51f,   0.39f,  0.00f);
    glVertex3f(0.55f,   0.39f,  0.00f);
    glVertex3f(0.55f,   0.50f,  0.00f);
    glVertex3f(0.465f,   0.50f,  0.00f);
    glEnd();

    /*------------LEFT SHOE------------*/
    glBegin(GL_QUADS);
    glColor3f(1.0,  0.0,    0.0);
    glVertex3f(0.3788f,   0.36f,  0.00f);
    glVertex3f(0.4385f,   0.36f,  0.00f);
    glVertex3f(0.44f,   0.39f,  0.00f);
    glVertex3f(0.40f,   0.39f,  0.00f);
    glEnd();

    /*------------RIGHT SHOE------------*/
    glBegin(GL_QUADS);
    glColor3f(1.0,  0.0,    0.0);
    glVertex3f(0.5115f,   0.36f,  0.00f);
    glVertex3f(0.5712f,   0.36f,  0.00f);
    glVertex3f(0.55f,   0.39f,  0.00f);
    glVertex3f(0.51f,   0.39f,  0.00f);
    glEnd();

    /*------------LEFT HAND------------*/

    glBegin(GL_QUADS);
    glColor3f(1.0,  0.5,    0.5);
    glVertex3f(0.368f,   0.52f,  0.00f);
    glVertex3f(0.390f,   0.52f,  0.00f);
    glVertex3f(0.390f,   0.61f,  0.00f);
    glVertex3f(0.368f,   0.61f,  0.00f);
    glEnd();

    /*------------RIGHT HAND------------*/

    glBegin(GL_QUADS);
    glColor3f(1.0,  0.5,    0.5);
    glVertex3f(0.560f,   0.52f,  0.00f);
    glVertex3f(0.582f,   0.52f,  0.00f);
    glVertex3f(0.582f,   0.61f,  0.00f);
    glVertex3f(0.560f,   0.61f,  0.00f);
    glEnd();

    /*------------LEFT ARM------------*/

    glBegin(GL_TRIANGLES);
    glColor3f(1.0,  0.0,    0.0);
    glVertex3f(0.340f,   0.61f,  0.00f);
    glVertex3f(0.390f,   0.65f,  0.00f);
    glVertex3f(0.390f,   0.61f,  0.00f);
    glEnd();

    /*------------RIGHT ARM------------*/

    glBegin(GL_TRIANGLES);
    glColor3f(1.0,  0.0,    0.0);
    glVertex3f(0.560f,   0.61f,  0.00f);
    glVertex3f(0.560f,   0.65f,  0.00f);
    glVertex3f(0.61f,   0.61f,  0.00f);
    glEnd();

    /*------------HEAD------------*/
    int i;
    glBegin(GL_POLYGON);
    glColor3f(1.0,  0.5,    0.5);
    roundShape(0.475,0.695,0.055,0.049);
    glEnd();


    /*------------LEFT EYE------------*/

    glBegin(GL_POLYGON);
    glColor3f(1.0,  1.0,    1.0);
    roundShape(0.45,0.705,0.012,0.012);
    glEnd();


    glBegin(GL_POLYGON);                    //EYEBALL
    glColor3f(0.0,  0.0,    0.0);
    roundShape(0.45,0.705,0.004,0.004);
    glEnd();


    /*------------RIGHT EYE------------*/


    glBegin(GL_POLYGON);
    glColor3f(1.0,  1.0,    1.0);
    roundShape(0.50,0.705,0.012,0.012);
    glEnd();


    glBegin(GL_POLYGON);            //EYEBALL
    glColor3f(0.0,  0.0,    0.0);
    roundShape(0.50,0.705,0.004,0.004);
    glEnd();


    /*------------MOUTH------------*/

    glBegin(GL_POLYGON);
    glColor3f(1.0,  1.0,    1.0);
    roundShape(0.475,0.67,0.02,0.008);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(1.0,  0.5,    0.5);
    roundShape(0.475,0.675,0.02,0.008);
    glEnd();




    /*------------CAP------------*/


    glBegin(GL_POLYGON);
    glColor3f(1.0,  1.0,    0.8);
    roundShape(0.475,0.735,0.054,0.013);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.5,  0.5,    0.5);
    roundShape(0.475,0.745,0.054,0.013);

    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.5,  0.5,    0.5);
    glVertex3f(0.421f,   0.75f,  0.00f);
    glVertex3f(0.529f,   0.75f,  0.00f);
    glVertex3f(0.529f,   0.78f,  0.00f);
    glVertex3f(0.421f,   0.78f,  0.00f);
    glEnd();





    /*------------SURFACE+MOON------------*/
    glBegin(GL_QUADS);
    glColor3f(1.0,  1.0,    1.0);
    glVertex3f(0.0f,   0.3588f,  0.00f);
    glVertex3f(1.00f,   0.3588f,  0.00f);
    glVertex3f(1.00f,   0.36f,  0.00f);
    glVertex3f(0.00f,   0.36f,  0.00f);
    glEnd();
    int q;
    float p;
    glBegin(GL_POLYGON);
    for(q=0,p=0.0330;q<360,p<=0.888;q++,p=p+0.0001)
    {
        glColor3f(p,  p,    p);
        float theta2=q*3.142/180;
        glVertex2f(0.85+0.11*cos(theta2),0.85+0.11*sin(theta2));
    }
    glEnd();


    glFlush();
}

void init(void)
{
    glClearColor(0.0,   0.0,    0.0,    0.0);
    glMatrixMode(GL_PROJECTION);                                //Initialize Matrix Mode
    glLoadIdentity();                                          //replaces the current matrix with the identity matrix
    glOrtho(0.0,1.0,    0.0,1.0,    -10.0,10.0);              // Graph Paper Size Initialization
}


int main(int argc, char** argv)
{
    glutInit(&argc  ,argv);                             //  Initialize the GLUT library.
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600,600);                      //SET WindowSize: width: 600px & height: 600px
    glutInitWindowPosition(100,100);
    glutCreateWindow("SHAPE MANIPULATION");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}







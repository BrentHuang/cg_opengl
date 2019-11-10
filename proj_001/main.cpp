#include <GL/freeglut.h>
#include <stdio.h>

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glRectf(-0.5f, -0.5f, 0.5f, 0.5f);
    glFlush();
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
    glutInitWindowPosition(100, 100);
    glutInitWindowSize(400, 400);
    glutCreateWindow("第一个OpenGL程序");

    const GLubyte* vendor = glGetString(GL_VENDOR);
    const GLubyte* renderer = glGetString(GL_RENDERER);
    const GLubyte* openglVersion = glGetString(GL_VERSION);
    const GLubyte* gluVersion = gluGetString(GLU_VERSION);

    printf("OpenGL实现厂商的名字：%s\n", vendor);
    printf("渲染器标识符：%s\n", renderer);
    printf("OpenGL实现的版本号：%s\n", openglVersion);
    printf("GLU工具库版本：%s\n", gluVersion);

    glutDisplayFunc(&display);
    glutMainLoop();

    return 0;
}

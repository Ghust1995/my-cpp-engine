attribute vec3 a_position;
attribute vec4 a_color;
varying vec4 v_color;
uniform vec2 u_screenSize;

void main()
{
    gl_Position = vec4(a_position, 1.0);
    v_color = a_color;
}


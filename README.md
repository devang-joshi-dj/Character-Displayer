# Character-Displayer
Its an OpenGL project which will show the characters on the screen when you press one.

# Character Displayer

A simple OpenGL and GLUT-based graphics program that displays letters and numbers using line segments.

The program opens a graphical window and waits for keyboard input. Pressing a key causes the corresponding character to be drawn using manually defined line coordinates. A "PRESS ANY KEY" message is displayed when the application starts.

## Features

* Displays digits `0-9`
* Displays letters `A-Z` and `a-z`
* Renders characters using OpenGL line primitives
* Randomizes drawing color on each refresh
* Interactive keyboard input
* Built using OpenGL, GLU, and GLUT

## Requirements

### Fedora

Install the required development packages:

```bash
sudo dnf install gcc freeglut-devel mesa-libGL-devel mesa-libGLU-devel
```

### Ubuntu / Debian

```bash
sudo apt update
sudo apt install gcc freeglut3-dev mesa-common-dev
```

## Building

Compile the program using the provided Makefile:

```bash
make
```

The executable will be generated in the `bin` directory.

## Running

Run the application with:

```bash
make run
```

or directly:

```bash
./bin/character_displayer
```

## Controls

Press any supported key on the keyboard:

| Key Type | Supported Keys |
| -------- | -------------- |
| Numbers  | `0-9`          |
| Letters  | `A-Z`, `a-z`   |

The corresponding character will be drawn in the application window.

Any unsupported key clears the current drawing.

## Project Structure

```text
.
├─main.c
├─Makefile
├─bin/
```

## Technical Details

The application uses:

* OpenGL for rendering
* GLU for 2D orthographic projection
* GLUT for window management and keyboard handling

Characters are constructed from multiple line segments using the OpenGL `GL_LINES` primitive.

## Notes

This project uses the legacy OpenGL fixed-function pipeline and GLUT APIs, making it suitable for educational purposes and introductory computer graphics coursework.

Modern OpenGL applications typically use shaders, vertex buffers, and libraries such as GLFW instead of GLUT.

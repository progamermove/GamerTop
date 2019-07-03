#include <iostream>
#include <X11/Xutil.h>
#include <assert.h>
#include "flags.hpp"

// Unit test for X11
void test_x11_support()
{
    Display *display = XOpenDisplay(NULL);
    assert(display != NULL);

    int screen = DefaultScreen(display);
    Window window = XCreateSimpleWindow(display, RootWindow(display, screen), 10, 10, 
        100, 100, 1, BlackPixel(display, screen), WhitePixel(display, screen));
    XCloseDisplay(display);
}

int main()
{
#if DEBUG_MODE

    // Test support for required libraries
    test_x11_support();

#endif

    std::cout << "Hello, Gamers!" << std::endl;
}

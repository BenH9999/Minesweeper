#pragma once

#include <raylib.h>
#include <iostream>
#include <vector>
#include <stdlib.h>
#include "Colour.hpp"

class Window{
    public:
        Window();
        Window(int width, int height, std::string title);

        Font comicF;
        Font MCF;

        void loadFonts();

        int getWidth();
        int getHeight();
        std::string getTitle();

        void setWidth(int newWidth);
        void setHeight(int newHeight);
        void setTitle(std::string newTitle);
    private:
        int width;
        int height;
        std::string title;
};
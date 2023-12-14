#include "Window.hpp"

Window::Window(){
    this->width = 680;
    this->height = 540;
    this->title = "";
}

Window::Window(int width, int height, std::string title){
    this->width = width;
    this->height = height;
    this->title = title;
}

void Window::loadFonts(){
    comicF = LoadFont("Font/comic.ttf");
    MCF = LoadFont("Font/minecraft.ttf");
}

int Window::getWidth(){
    return this->width;
}

int Window::getHeight(){
    return this->height;
}

std::string Window::getTitle(){
    return this->title;
}

void Window::setWidth(int newWidth){
    this->width = newWidth;
}

void Window::setHeight(int newHeight){
    this->height = newHeight;
}

void Window::setTitle(std::string newTitle){
    this->title = newTitle;
}
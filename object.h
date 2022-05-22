#pragma once
#include"TextureManager.h"

class Object
{
    private:
        SDL_Rect src, dest;
        SDL_Texture* Tex;
    public:
        void setSrc(int x, int y, int w, int h);
        void setDest(int x, int y, int w, int h);
        SDL_Texture* getTexture();
        SDL_Rect getSrc();
        SDL_Rect getDest();

        void CreateTexture(const char* address, SDL_Renderer* ren);
        virtual void Render(SDL_Renderer* ren, SDL_Rect src, SDL_Rect dest) = 0;
};
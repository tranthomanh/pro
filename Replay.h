#pragma once
#include"Background.h"
class Replay
{
    private:
        bool isClicked;
        Background replayBackground;
    public:
        Replay();
        bool getClicked();
        void Initialize(SDL_Renderer* ren);
        int EventHandling(SDL_Event& e);
        void Render(SDL_Renderer* ren);
        void reset();
};
#pragma once
#include<SDL.h>
#include<SDL_image.h>
//#include<SDL_mixer.h>
#include"object.h"
#include "player.h"
#include"Background.h"
#include"CollisionManager.h"
#include"MainMenu.h"
#include"Replay.h"
class Gameloop
{
    private:
        Player p;
        Background b;
        Background ground1,ground2;
        Background Pipe_Above1;
        Background Pipe_Below1;
        Background Pipe_Above2;
        Background Pipe_Below2;
        Background Pipe_Above3;
        Background Pipe_Below3;
        Background leaderboard;
        Replay replay;
        MainMenu menu;
        const int HEIGHT = 600;
        const int WIDTH = 800;
        int points = 0;
        int generations = 0;
        int nextCheckPoint = 0;
        int variance1 = rand() % 201 - 100;
        int variance2 = rand() % 201 - 100;
        int variance3 = rand() % 201 - 100;
        bool GameState;
        bool GameIsPlay;
        SDL_Window* window;
        SDL_Event event1;
        SDL_Renderer* renderer;
        Player a[10];
	    int s[5];
        int num_score;
        SDL_Rect number1, number2, number3;
        
    public:
        Gameloop();
        bool getGameState();
        bool getGameIsPlay();
        void MainMenu();
        void Replay();
        void Intialize();
        void CollisionDetection();
        void Reset();
        void Event();
        void Update();
        void Render();
        void Clear();       
};



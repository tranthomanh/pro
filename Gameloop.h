#pragma once
//Thư viện SDL
#include<SDL.h>
//Thư viện SDL_image
#include<SDL_image.h>
//Thư viện SDL_mixer
#include<SDL_mixer.h>
//#include<SDL_mixer.h>
#include"object.h"
//class con chim
#include "player.h"
//class back
#include"Background.h"
//class xử lí va chạm
#include"CollisionManager.h"
//class Menu
#include"MainMenu.h"
//class replay
#include"Replay.h"
class Gameloop
{
    private:
        //Biến con chim
        Player p;
        //Biến background
        Background b;
        //Biến hình dải đất
        Background ground1,ground2;
        //6 biến cột
        Background Pipe_Above1;
        Background Pipe_Below1;
        Background Pipe_Above2;
        Background Pipe_Below2;
        Background Pipe_Above3;
        Background Pipe_Below3;
        Background leaderboard;
        //Biến màn hình replay
        Replay replay;
        //Biến màn hình menu
        MainMenu menu;
        //Chiều cao và chiều rộng màn hình game
        const int HEIGHT = 600;
        const int WIDTH = 800;
        //Biến tính điểm
        int points = 0;
        //Biến cập nhật độ cao kế tiếp của cột
        int nextCheckPoint = 0;
        // 3 biến độ cao random của 3 cột trên giao diện game
        int variance1 = rand() % 201 - 100;
        int variance2 = rand() % 201 - 100;
        int variance3 = rand() % 201 - 100;
        // Biến cho biết lúc chơi đã thua chưa
        bool GameState;
        // Biến cho biết có quay lại màn hình menu ko
        bool GameIsPlay;
        // Biến cửa sổ
        SDL_Window* window;
        // Biến sự kiện
        SDL_Event event1;
        // Biến vẽ
        SDL_Renderer* renderer;
        // mảng 10 biến vẽ 10 chữ số
        Player a[10];
        // mảng lưu trữ các chữ số của điểm hiện tại
	    int s[5];
        // HCN lưu vị trí để render điểm 
        SDL_Rect number1, number2, number3;
        //
        Mix_Chunk* SoundGame, *SoundPoint;
        
    public:
        //Hàm khởi tạo các biến và tọa độ
        Gameloop();
        //Hàm trả về GameState
        bool getGameState();
        //Hàm trả về GameIsPlay
        bool getGameIsPlay();
        //Hàm render MainMenu và sự kiện với MainMenu
        void MainMenu();
        //Hàm render replay và sự kiện với replay
        void Replay();
        //Hàm khởi tạo cửa sổ và texture
        void Intialize();
        //Hàm xử lý va chạm
        void CollisionDetection();
        //Hàm reset lại để chơi lại từ đầu
        void Reset();
        //Hàm xử lý sự kiện
        void Event();
        //Hàm chạy cột
        void Update();
        //Hàm vẽ
        void Render();
        //Hàm hủy cửa sổ
        void Clear();     
};



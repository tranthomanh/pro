all:
	g++ -Isrc\include -Lsrc\lib -o main main.cpp gameloop.cpp object.cpp player.cpp Background.cpp MainMenu.cpp TextureManager.cpp CollisionManager.cpp Replay.cpp -lmingw32 -lSDL2main -lSDL2 -lSDL2_image -lSDL2_mixer
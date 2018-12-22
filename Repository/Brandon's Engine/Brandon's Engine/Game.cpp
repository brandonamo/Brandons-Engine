#include "Engine.h"

class GameName : public Engine::Application {
public:
	GameName() {

	}

	~GameName() {

	}

};

Engine::Application* Engine::CreateApplication() {
	return new GameName();
}
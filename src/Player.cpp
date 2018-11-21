#include "Player.h"
#include "Game.h"

Player::Player()
{
	TheTextureManager::Instance()->load("../../Assets/textures/plane.png", "player", TheGame::Instance()->getRenderer());
}

Player::~Player()
{
}

void Player::draw()
{
	TheTextureManager::Instance()->draw("player", getPosition().x, getPosition().y, 65, 65, TheGame::Instance()->getRenderer());
}

void Player::update()
{
	if (SDL_GetTicks() % 16 == 0) {
		setPosition(glm::vec2(getPosition().x, getPosition().y + 5));
	}
}

void Player::clean()
{
}

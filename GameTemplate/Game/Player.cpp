#include "stdafx.h"
#include "Player.h"


Player::Player()
{
	m_skinModelRender = NewGO<prefab::CSkinModelRender>(0);
	m_skinModelRender->Init(L"modelData/unityChan.cmo");
}


Player::~Player()
{

}
void Player::Update()
{
	CPad& pad = Pad(0);
	position.x += Pad(0).GetLStickXF();
	position.z += Pad(0).GetLStickYF();
	m_skinModelRender->SetPosition(position);
}


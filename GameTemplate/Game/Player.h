#pragma once
class Player : public IGameObject
{
public:
	Player();
	~Player();
	void Update();
	CVector3 position = CVector3::Zero;
	prefab::CSkinModelRender* m_skinModelRender = nullptr;
};


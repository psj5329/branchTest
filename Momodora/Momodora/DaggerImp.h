#pragma once
#include "Enemy.h"
class DaggerImp :
	public Enemy
{
	


public:
	void Init() override;
	void Release()override;
	void Update() override;
	void Render(HDC hdc) override;
};


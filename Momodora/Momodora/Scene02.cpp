#include "pch.h"
#include "Scene02.h"
#include "Camera.h"
#include "Enemy.h"
#include "Monkey.h"

void Scene02::Init()
{
	Monkey* monkey1 = new Monkey();
	monkey1->Init();
	monkey1->SetObject();
	monkey1->SetPosition(WINSIZEX / 2, 500);
	ObjectManager::GetInstance()->AddObject(ObjectLayer::Enemy, monkey1);

	IMAGEMANAGER->LoadFromFile(L"MapTest", Resources(L"Map/map2"), 1200, 900, false);
	mMap = IMAGEMANAGER->FindImage(L"MapTest");
}
void Scene02::Release()
{
}

void Scene02::Update()
{
	OBJECTMANAGER->Update();
}

void Scene02::Render(HDC hdc)
{
	wstring str = L"��2 ������";
	TextOut(hdc, 100, 200, str.c_str(), (int)str.length());
	

	CAMERAMANAGER->GetMainCamera()->Render(hdc, mMap, 0, 0);
	OBJECTMANAGER->Render(hdc);

	wstring str3 = L"MouseX:" + to_wstring(_mousePosition.x);
	TextOut(hdc, _mousePosition.x+10, _mousePosition.y + 10, str3.c_str(), str3.length());
	wstring str4 = L"MouseY:" + to_wstring(_mousePosition.y);
	TextOut(hdc, _mousePosition.x+10, _mousePosition.y + 30, str4.c_str(), str4.length());

}
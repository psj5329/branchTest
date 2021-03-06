#pragma once

class GameObject
{
protected:
	string mName;
	float mX;
	float mY;
	float mSizeX;
	float mSizeY;
	//Vector2 mPosition;
	//Vector2 mSize;
	RECT mRect;

	bool mIsActive;
	bool mIsDestroy;

public:
	virtual void Init() = 0;
	virtual void Release() = 0;
	virtual void Update() = 0;
	virtual void Render(HDC hdc) = 0;

	inline string GetName()const { return mName; }
	inline void SetName(const string& name) { mName = name; }
	inline float GetX()const { return mX; }
	inline void SetX(float x) { mX = x; }
	inline float GetY()const { return mY; }
	inline void SetY(float y) { mY = y; }
	inline float GetSizeX()const { return mSizeX; }
	inline void SetSizeX(float sizeX) { mSizeX = sizeX; }
	inline float GetSizeY()const { return mSizeY; }
	inline void SetSizeY(float sizeY) { mSizeY = sizeY; }
	//inline float GetX()const { return mPosition.GetX(); }
	//inline void SetX(float x) { mPosition.SetX(x); }
	//inline float GetY()const { return mPosition.GetY(); }
	//inline void SetY(float y) { mPosition.SetY(y); }
	//inline float GetSizeX()const { return mSize.GetX(); }
	//inline void SetSizeX(float sizeX) { mSize.SetX(sizeX); }
	//inline float GetSizeY()const { return mSize.GetY(); }
	//inline void SetSizeY(float sizeY) { mSize.SetY(sizeY); }
	inline RECT GetRect()const { return mRect; }
	inline void SetRect(RECT rect) { mRect = rect; }

	inline bool GetIsActive()const { return mIsActive; }
	inline void SetIsActive(bool isActive) { mIsActive = isActive; }
	inline bool GetIsDestroy()const { return mIsDestroy; }
	inline void SetIsDestroy(bool isDestroy) { mIsDestroy = isDestroy; }

	inline void SetObject(bool isActive = true, bool isDestroy = false) { mIsActive = isActive; mIsDestroy = isDestroy; }
	inline void SetObject(const string& name, bool isActive = true, bool isDestroy = false) { mName = name; mIsActive = isActive; mIsDestroy = isDestroy; }
};
#ifndef PRACTICE1
#define PRACTICE1

#include<stdio.h>
#include<string.h>

//問１
class Charactor 
//CharacterCLASSを別で作成する為わざとミス
{

};

//問２
class Player
{
public:

private:
	int m_HP;
	int m_MP;
	int m_Level;
};

//問３
class Caluculator
{
public:
	int Add(int a, int b);

	int Sub(int c, int d);

	int Mul(int e, int f);

	float Div(float g, float h);

	//問４
	float Add(float j, float k);
};

//問５
class Drawer
{
public:
	Drawer();

	void PrintParameter();

private:
	float m_posX;

	float m_posY;

	float m_Angle;

	float m_Scale;
};

//問６
/*
class Character
{
public:
	Character();
	

private:
	char* m_Name;
	int m_Hp;
	int m_Mp;
	int m_At;
	int m_Deff;
};

Character::Character()
{
	strcpy


	m_Name = "名無し";
	m_Hp = 0;
	m_Mp = 0;
	m_At = 0;
	m_Deff = 0;
}

*/

//問７
/*
class Jugyoin
{
public:
	Jugyoin(char* name);
	~Jugyoin();

private:
	int m_ID;
	char m_Name[32];
};

Jugyoin::Jugyoin(char* name)
{
	static int EntryID = 1;
	m_ID = EntryID;
	EntryID++;
	m_Name[32] = name;
}

Jugyoin::~Jugyoin()
{
}
*/
#endif
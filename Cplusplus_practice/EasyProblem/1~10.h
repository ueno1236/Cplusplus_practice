#ifndef PRACTICE1
#define PRACTICE1

#include<stdio.h>
#include<string.h>

//��P
class Charactor 
//CharacterCLASS��ʂō쐬����ׂ킴�ƃ~�X
{

};

//��Q
class Player
{
public:

private:
	int m_HP;
	int m_MP;
	int m_Level;
};

//��R
class Caluculator
{
public:
	int Add(int a, int b);

	int Sub(int c, int d);

	int Mul(int e, int f);

	float Div(float g, float h);

	//��S
	float Add(float j, float k);
};

//��T
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

//��U
class Character
{
public:
	Character();
	

private:
	char m_Name[32];
	int m_Hp;
	int m_Mp;
	int m_At;
	int m_Deff;
};

Character::Character()
{
	m_Name[32] = "������";
	m_Hp = 0;
	m_Mp = 0;
	m_At = 0;
	m_Deff = 0;
}



#endif
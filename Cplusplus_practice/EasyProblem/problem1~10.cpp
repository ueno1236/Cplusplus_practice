#include"1~10.h" 

//問３
int Caluculator::Add(int a, int b)
{
	return a + b;
}

int Caluculator::Sub(int c, int d)
{
	return c - d;
}

int Caluculator::Mul(int e, int f)
{
	return e * f;
}

float Caluculator::Div(float g, float h)
{
	return g / h;
}

//問４
float Caluculator::Add(float j, float k)
{
	return j + k;
}


//問５
Drawer::Drawer()
{
	m_posX = 0.0f;

	m_posY = 0.0f;

	m_Angle = 0.0f;

	m_Scale = 0.0f;
}

void Drawer::PrintParameter() 
{
	printf("問5:%f\n",m_posX);

	printf("問5:%f\n",m_posY);

	printf("問5:%f\n",m_Angle);

	printf("問5:%f\n\n",m_Scale);
}
/*
//問６
Character::Character()
{
	m_Name[32] = "名無し";
	m_Hp = 0;
	m_Mp = 0;
	m_At = 0;
	m_Deff = 0;
}

*/

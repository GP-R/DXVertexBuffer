#include "stdafx.h"
#include "inputclass.h"
#include "GraphicsClass.h"

InputClass::InputClass()
{
}


InputClass::InputClass(const InputClass& other)
{
}


InputClass::~InputClass()
{
}


void InputClass::Initialize()
{
	// Ű �迭�� �ʱ�ȭ�մϴ�
	for (int i = 0; i<256; ++i)
	{
		m_keys[i] = false;
	}
}


void InputClass::KeyDown(unsigned int input, GraphicsClass& pGraphics)
{
	// Ű�� ���ȴٸ� �ش� Ű���� true�� �����մϴ�
	m_keys[input] = true;
	switch (input)
	{
	case 'R':
		pGraphics.SetBackColor('R');
		break;
	case 'G':
		pGraphics.SetBackColor('G');
		break;
	case 'B':
		pGraphics.SetBackColor('B');
		break;
	case 'w':
		break;
	case 's':
		break;
	case '1':
		break;
	case '2':
		break;
	}
}


void InputClass::KeyUp(unsigned int input)
{
	// Ű�� �����Ǿ��ٸ� �ش� Ű���� false�� �����մϴ�
	m_keys[input] = false;
}


bool InputClass::IsKeyDown(unsigned int key)
{
	// ���� Ű���� ���������� �ƴ��� ���¸� ��ȯ�մϴ�
	return m_keys[key];
}
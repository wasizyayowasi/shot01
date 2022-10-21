#pragma once

#include "Vec2.h"

class SceneMain;

class Enemy
{
public:
	Enemy();
	virtual ~Enemy();

	void setMain(SceneMain* pMain) { m_pMain = pMain; }

	// �O���t�B�b�N�f�[�^�ݒ�
	void setHandle(int handle) { m_handle = handle; }

	// �v���C���[�̏�����
	void init();

	// ����
	void update();
	// �`��
	void draw();

	//���݂��邩
	bool isExist()const { return m_isExist; }
	void setExist(bool isExist) { m_isExist = isExist; }

	// ���̎擾
	Vec2 getPos() const { return m_pos; }

	//�����蔻��̕��B�������擾
	int getColWidth();
	int getColHeight();

private:

	SceneMain* m_pMain;

	int m_handle;

	//���݃t���O
	bool m_isExist;

	//�V���b�g�̔����Ԋu
	int m_shotInterval;

	// �\���ʒu
	Vec2 m_pos;
	// �ړ�
	Vec2 m_vec;
};
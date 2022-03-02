#include "Bridge.h"
#include "Player.h"
#include "Enemy.h"
#include "Hero.h"
#include "Berserker.h"

int main()
{
	//string text = "Hello World"; //�e�X�g�e�L�X�g
	////�R���\�[�������o���N���X(���)�𐶐�
	//ConsoleWriter* consleWriter = new ConsoleWriter();
	////HTML�^�O�����o��(�����̃N���X)
	//HtmlWriter* htmlWriter = new HtmlWriter();
	////��ނ̃N���X��ݒ�
	//htmlWriter->setImpl(consleWriter);
	////�����o��
	//htmlWriter->writeString(text);

	//delete htmlWriter;
	//delete consleWriter;

	//�L�����N�^�[�̎����N���X
	Player* player = new Player();
	Enemy* enemy = new Enemy();
	//�E�Ƃ̋@�\�N���X
	player->setJob(new Hero());
	enemy->setJob(new Berserker());

	player->Attack();
	enemy->Attack();
	player->Defence();
	enemy->Defence();

	delete player;
	delete enemy;
}
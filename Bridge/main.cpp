#include "Bridge.h"
#include "Player.h"
#include "Enemy.h"
#include "Hero.h"
#include "Berserker.h"

int main()
{
	//string text = "Hello World"; //テストテキスト
	////コンソール書き出しクラス(種類)を生成
	//ConsoleWriter* consleWriter = new ConsoleWriter();
	////HTMLタグ書き出し(実装のクラス)
	//HtmlWriter* htmlWriter = new HtmlWriter();
	////種類のクラスを設定
	//htmlWriter->setImpl(consleWriter);
	////書き出し
	//htmlWriter->writeString(text);

	//delete htmlWriter;
	//delete consleWriter;

	//キャラクターの実装クラス
	Player* player = new Player();
	Enemy* enemy = new Enemy();
	//職業の機能クラス
	player->setJob(new Hero());
	enemy->setJob(new Berserker());

	player->Attack();
	enemy->Attack();
	player->Defence();
	enemy->Defence();

	delete player;
	delete enemy;
}
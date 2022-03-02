#ifndef BRIDGE_H_
#define BRIDGE_H_

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

/* 種類のインターフェイス */
class WriterImpl {
public:
	virtual void openFile() = 0;
	virtual void writeString(string& str) = 0;
	virtual void closeFile() = 0;
};
/***************************/

/* 実装の抽象クラス */
class Writer {
public:
	virtual void openFile() = 0;
	virtual void writeString(string& str) = 0;
	virtual void closeFile() = 0;
	WriterImpl* getImpl();
	void setImpl(WriterImpl* impl);

private:
	WriterImpl* pImpl_;
};
/****************************/

/* 書き出しクラス（実装のクラス） */
class PlainWriter : public Writer {
	virtual void openFile();
	virtual void writeString(string& str);
	virtual void closeFile();
};
/************************************/

/* HTMLでの書き出しクラス（実装のクラス） */
class HtmlWriter : public PlainWriter {
public:
	virtual void writeString(string& str);
};
/***********************************/

/* コンソール書き出し（種類のクラス） */
class ConsoleWriter : public WriterImpl {
public:
	virtual void openFile();
	virtual void writeString(string& str);
	virtual void closeFile();
};
/***********************************/

/* ローカルファイル書き出し（種類のクラス） */
class LocalFileWriter : public WriterImpl {
public:
	LocalFileWriter(string fileName);
	~LocalFileWriter();
	virtual void openFile();
	virtual void closeFile();
	virtual void writeString(string& str);

protected:
	ofstream* ofs_;

private:
	string fileName_;
};
/***********************************/
#endif // !BRIDGE_H_
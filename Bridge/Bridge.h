#ifndef BRIDGE_H_
#define BRIDGE_H_

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

/* ��ނ̃C���^�[�t�F�C�X */
class WriterImpl {
public:
	virtual void openFile() = 0;
	virtual void writeString(string& str) = 0;
	virtual void closeFile() = 0;
};
/***************************/

/* �����̒��ۃN���X */
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

/* �����o���N���X�i�����̃N���X�j */
class PlainWriter : public Writer {
	virtual void openFile();
	virtual void writeString(string& str);
	virtual void closeFile();
};
/************************************/

/* HTML�ł̏����o���N���X�i�����̃N���X�j */
class HtmlWriter : public PlainWriter {
public:
	virtual void writeString(string& str);
};
/***********************************/

/* �R���\�[�������o���i��ނ̃N���X�j */
class ConsoleWriter : public WriterImpl {
public:
	virtual void openFile();
	virtual void writeString(string& str);
	virtual void closeFile();
};
/***********************************/

/* ���[�J���t�@�C�������o���i��ނ̃N���X�j */
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
#include "Bridge.h"
#include <iostream>

/** Writer抽象クラス ****************************************/
WriterImpl* Writer::getImpl() {
	return pImpl_;
}

void Writer::setImpl(WriterImpl* impl) {
	pImpl_ = impl;
}
/*************************************************************/

/** PlainWriterクラス ****************************************/
void PlainWriter::openFile() {
	getImpl()->openFile();
}

void PlainWriter::closeFile() {
	getImpl()->closeFile();
}

void PlainWriter::writeString(string& str) {
	getImpl()->writeString(str);
}
/*************************************************************/

/** HTMLタグの付いた文字列の出力 *********************************/
void HtmlWriter::writeString(string& str) {
	string htmlStr = "<h1>" + str + "</h1>";
	getImpl()->writeString(htmlStr);
}
/*************************************************************/

/** コンソール書き出し ****************************************/
void ConsoleWriter::openFile() {
}

void ConsoleWriter::closeFile() {
}

void ConsoleWriter::writeString(string& str) {
	cout << str << endl;
}
/*************************************************************/

/** テキストファイル書き出し *********************************/
LocalFileWriter::LocalFileWriter(string fileName) {
	ofs_ = new ofstream();
	fileName_ = fileName;
}

LocalFileWriter::~LocalFileWriter() {
	delete ofs_;
}
void LocalFileWriter::openFile() {
	ofs_->open(fileName_.c_str());
}

void LocalFileWriter::writeString(string& str) {
	ofs_->write(str.c_str(), (streamsize)str.length());
}

void LocalFileWriter::closeFile() {
	ofs_->close();
}
/*************************************************************/
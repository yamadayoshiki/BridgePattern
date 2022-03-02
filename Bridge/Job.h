#ifndef JOB_H_
#define JOB_H_

//機能クラス
class Job {
public:
	virtual void Attack() = 0;
	virtual void Deffence() = 0;
};
#endif // !JOB_H_

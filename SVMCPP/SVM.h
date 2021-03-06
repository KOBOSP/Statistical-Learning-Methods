#pragma once
#ifndef MACHINE_LEARNING_SVM_H
#define MACHINE_LEARNING_SVM_H
#include <vector>
#include <utility>
#include <iostream>
#include "modelbase.h"

class SVM : public Base {
private:
	double b;
	std::vector<double> w;
	std::vector<double> alpha;
	std::vector<double> E;//abs[g(x)-yi]
	double tol = 0.001;
	double eps = 0.0005;
	double C = 1.0;
	double divRate = 0.6;
	int choModel = 2;//1 :linear 2:RBF 3:poly
public:
	virtual void getData(const std::string &filename);
	virtual void run();
	void createTrainTest();//divide data into train and test
	void SMO();
	int SMOTakeStep(int& i1, int& i2);//return 0 => can't find suitable i2,should change i1
	int SMOExamineExample(int i2);
	double kernel(std::vector<double>&, std::vector<double>&);
	double computeE(int& i);
	std::pair<double, double> SMOComputeOB(int& i1, int& i2, double&L, double& H);
	void initialize();
	void train();
	double predict(const std::vector<double>& inputData);
};

#endif //MACHINE_LEARNING_SVM_H

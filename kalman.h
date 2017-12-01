/*
 * TODO : add description
 *
 */


#include <Eigen>

class kalman
{
public:
	Eigen::MatrixXd * A;

	Eigen::MatrixXd * B;

	Eigen::MatrixXd * C;

	Eigen::MatrixXd * P;

	Eigen::MatrixXd * R;

private:

	Eigen::MatrixXd * G;

public:

	// constructor
	kalman(
			Eigen::MatrixXd * A,
			Eigen::MatrixXd * B,
			Eigen::MatrixXd * C,
			Eigen::MatrixXd * P,
			Eigen::MatrixXd * R );


	// destructor
	~kalman();

	kalman::predict();

	kalman::update();

};

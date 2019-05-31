Mat Resize(Mat I, float s){

	int orig_x = I.cols;
	int orig_y = I.rows;

	int tar_x = orig_x * s;
	int tar_y = orig_y * s;

	// Query points
	Mat X(tar_y, tar_x, CV_32FC1);
	Mat Y(tar_y, tar_x, CV_32FC1);

	// Setting the query points
	for (int i = 0; i < target_y; i++){

		for (int j = 0; j < target_x; j++){

			// Set X[i,j] and Y[i,j]
		}
	}


	// Output image
	Mat Output(tar_y, tar_x, CV_8UC1);

	// Performing the interpolation
	for (int i = 0; i < target_y; i++){

		for (int j = 0; j < target_x; j++){

			// Set Output[i,j] using X[i,j] and Y[i,j]
		}
	}

	return Output;
}
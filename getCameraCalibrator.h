#pragma once
#include <opencv2/core/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv/cv.hpp>
#include <opencv2/opencv.hpp>
#define SIZE 30

#ifdef SOCKCLI_DLL_EXPORT

#ifndef SOCKCLI_STD_CALL
#define SOCKCLI_STD_CALL __declspec(dllexport) 
#endif  //end #ifndef SOCKCLI_STD_CALL

#else

#ifndef SOCKCLI_STD_CALL
#define SOCKCLI_STD_CALL __declspec(dllimport) 
#endif //end #ifndef SOCKCLI_STD_CALL

#endif//end #ifdef SOCKCLI_STD_CALL

typedef struct
{
	std::string tagID;
	std::string name;
	int rgb;
}ui_locationInformation;

extern "C" int SOCKCLI_STD_CALL CameraCalibratorInit(std::vector<ui_locationInformation> ui_locationInforList);
extern "C" int SOCKCLI_STD_CALL CameraCalibratorChange(std::vector<ui_locationInformation> ui_locationInforList);
extern "C" cv::Mat SOCKCLI_STD_CALL getCameraCalibrator();
extern "C" int SOCKCLI_STD_CALL algorithmCamera(clLocation g_locationInfor);

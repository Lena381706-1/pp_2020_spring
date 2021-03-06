// Copyright 2019 Evdokimov Artem
#ifndef MODULES_TASK_2_EVDOKIMOV_A_IMAGE_FILTERING_IMAGE_FILTERING_H_
#define MODULES_TASK_2_EVDOKIMOV_A_IMAGE_FILTERING_IMAGE_FILTERING_H_

#include <vector>

std::vector<int> kernel();
std::vector<int> generateImage(int, int);
std::vector<int> getTempImage(std::vector<int>, int, int);
std::vector<int> imageFiltering(std::vector<int>, std::vector<int>, int, int);
std::vector<int> imageFilteringOMP(std::vector<int>, std::vector<int>, int,
                                   int);

#endif  // MODULES_TASK_2_EVDOKIMOV_A_IMAGE_FILTERING_IMAGE_FILTERING_H_

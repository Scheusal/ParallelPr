// Copyright 2021 Podskrebko Nikita
#ifndef MODULES_TASK_1_PODSKREBKO_SEQ_FILTER_GAUSSA_BLOCK_H_
#define MODULES_TASK_1_PODSKREBKO_SEQ_FILTER_GAUSSA_BLOCK_H_
#include <vector>

std::vector<int> gaussianFilterSeq(const std::vector<int> & img, int width, int height, int radius, float sigma);
std::vector<float> createGaussianKernel(int radius, float sigma);
int calculateNewPixelColor(std::vector<int> img, int width, int height,
    int x, int y, int radius, std::vector<float> kernel);
int Clamp(int value, int min, int max);
#endif  // MODULES_TASK_1_PODSKREBKO_SEQ_FILTER_GAUSSA_BLOCK_H_

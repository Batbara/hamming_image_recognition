#pragma once
#include <iostream>
#include <vector>
#include <fstream>
#include <streambuf>
#include <string>

const int HEIGHT = 5;
const int WIDTH = 5;
__declspec(selectany)int n = HEIGHT * WIDTH;
__declspec(selectany)int m = 10;

std::vector<unsigned int> process(std::vector<int> noisy_image, std::vector < std::vector<int> > learning_sample);
std::vector<unsigned int> find_winners(std::vector<double> output);
double activation_function(double argument);
std::vector<std::string> read_image_input();
std::vector<std::string> read_noisy_image_input();
std::string read_input_file(std::string filename);
std::vector < std::vector<int> > convert_imgs_to_vector(std::vector<std::string> image_input);
std::vector<int> parse_learning_image(std::string image);
int hamming_distance(std::vector<int> first, std::vector<int> second);

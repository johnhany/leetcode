#include "solution.hpp"


vector<vector<int>> Solution::flipAndInvertImage(vector<vector<int>>& image) {
	for(int i=0;i<image.size();i++){
		int a=0;
		int b=image.size()-1;
		while(a<b){
			swap(image[i][a],image[i][b]);
			a++;
			b--;
		}
		for(int j=0;j<image.size();j++){
			image[i][j]=1-image[i][j];
		}
	}
	return image;
}
